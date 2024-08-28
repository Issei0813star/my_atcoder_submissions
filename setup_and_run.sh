#!/bin/bash

# 仮想環境のディレクトリ名
VENV_DIR="venv"

# 仮想環境が存在しない場合は作成
if [ ! -d "$VENV_DIR" ]; then
    echo "Creating virtual environment..."
    python3 -m venv "$VENV_DIR"
fi

# 仮想環境をアクティブにする
source "$VENV_DIR/bin/activate"

# 必要なパッケージをインストール
pip install --upgrade pip
pip install requests
pip install beautifulsoup4

# Pythonスクリプトを実行
python auto-push.py

# 仮想環境をディアクティブにする
deactivate
