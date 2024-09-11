import requests
import os
import time
import git_command
from bs4 import BeautifulSoup
from datetime import datetime, timedelta
import pytz

# 提出一覧取得URL
GET_SUBMISSIONS_URL = "https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions"

USER_ID = "isseistar0813"

GET_CODE_URL = "https://atcoder.jp/contests/{contest_id}/submissions/{sub_id}"

local_tz = pytz.timezone('Asia/Tokyo')

now = datetime.now(local_tz)

yesterday_start = now - timedelta(days=1)
yesterday_start = yesterday_start.replace(hour=0, minute=0, second=0, microsecond=0)

yesterday_start_utc = yesterday_start.astimezone(pytz.utc)

epoch_start = datetime(1970, 1, 1, tzinfo=pytz.utc)
epoch_seconds = int((yesterday_start_utc - epoch_start).total_seconds())

YESTERDAY = epoch_seconds
headers = {
    "Accept-Encoding": "gzip, deflate, br",
    "User-Agent": "python-requests/2.28.2"
}


response = requests.get(GET_SUBMISSIONS_URL, headers=headers, params={"user": USER_ID, "from_second": YESTERDAY})

submissions = response.json()

if len(submissions) != 0:
  
  dir_programming = os.getenv("DIR_PROGRAMMING")
  
  git_user_name = os.getenv("USER_NAME_GIT")
  git_email = os.getenv("EMAIL_GIT")
  
  git_command.set_git_config('user.name', git_user_name)
  git_command.set_git_config('user.email', git_email)
  
  # codesディレクトリへ移動
  codes_directory = f"{dir_programming}/auto-push-atcoder/codes"
  os.chdir(codes_directory)
  
  for submission in submissions:
    if submission['result'] == 'AC':
      # 連続で投げると弾かれるため
      time.sleep(5)
      contest_id = submission['contest_id']
      sub_id = submission['id']
      # 提出コードを取得
      res = requests.get(GET_CODE_URL.format(contest_id=contest_id, sub_id=sub_id))
      html_content = res.text
      soup = BeautifulSoup(html_content, 'html.parser')
      pre_element = soup.find('pre', id='submission-code')
      
      if pre_element:
        
        # コンテストごとにディレクトリをなければ作る
        target_directory = os.path.join(codes_directory, contest_id)
        if not os.path.exists(target_directory):
          os.makedirs(target_directory)
        
        # コンテストごとのディレクトリに移動
        os.chdir(target_directory)
        
        # ソースファイルを作る
        ace_mode = pre_element.get('data-ace-mode', 'text')
        code_content = pre_element.get_text()
        file_extension_mapping = {
          'java': '.java',
          'c_cpp':'.cpp'
        }
        file_extension = file_extension_mapping.get(ace_mode, '.txt')
        problem_id = submission['problem_id']
        file_name = f'{problem_id}{file_extension}'
        
        # コードをファイルに書き込み
        with open(file_name, 'w') as file:
          file.write(code_content)
        
        # pushする
        git_command.do_git_command()
        
        # codesへ戻る
        os.chdir('..')
        
      else:
        # TODO リクエストしすぎるとたまに取れないらしいので、その場合は再試行
        print(f"Element <pre id='submission-code'> not found: {contest_id}:{sub_id}")



