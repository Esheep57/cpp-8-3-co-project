# cpp-8-3-co-project

## 介紹
這是一個 C++ 課程的協作項目，旨在實現和操作複數（Complex numbers）的類別。本項目由兩位開發者協作完成，並通過 GitHub 進行版本控制和協作。

## 功能
本項目包括以下功能：
- 複數的加法、減法、乘法、除法
- 複數的相等性比較
- 複數的輸入和輸出操作

## 文件結構
- `Complex.cpp`：包含 `Complex` 類別的實現。
- `main.cpp`：測試 `Complex` 類別的功能。
- `.gitignore`：指定 Git 在提交代碼時應忽略的文件和目錄。
- `LICENSE`：項目的許可證文件。
- `README.md`：項目的介紹和說明文件。

## 分支策略
我們採用了 Git 分支策略進行協作開發，每個開發者分別在自己的分支上開發，最終通過 Pull Request 合併到 `main` 分支。

- `feature-branch1`：第一位開發者的分支，負責實現基本的複數操作。
- `feature-branch2`：第二位開發者的分支，負責實現更多的操作符重載。

## Commit Message 規範
我們遵循以下格式的 commit message：

`<action>: <description>`

### Action
Action 用一個簡短的詞來描述你的更改動作，常見的動作包括：
- `add`：新增功能或者作業檔案
- `fix`：修復了一個 bug
- `update`：更新某些文件或功能
- `remove`：刪除不需要的文件或功能

### Description
Description 是對動作的簡短描述，清楚而簡潔。例如：
- `add: 第二周作業`
- `fix: 修復登入功能的 bug`
- `update: 更新 README 文件`

## 許可證
本項目採用 MIT 許可證，詳見 `LICENSE` 文件。