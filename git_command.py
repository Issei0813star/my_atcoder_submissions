import subprocess

def run_command(command):
    result = subprocess.run(command, shell=True, text=True, capture_output=True)
    if result.returncode != 0:
        print(f"Error: {result.stderr}")
    return result.stdout

def git_add():
    command = "git add ."
    print(run_command(command))

def git_commit(message):
    command = f"git commit -m \"{message}\""
    print(run_command(command))

def git_push():
    command = "git push origin main"
    print(run_command(command))

def do_git_command():
    commit_message = "my AtCoder submissions"
    git_add()
    git_commit(commit_message)
    git_push()
