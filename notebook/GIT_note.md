git-note
==========================================

<a href="https://gitbook.tw">為你自己學 Git</a>


website:https://github.com/iachievedream/macwin10

$ cd /tmp                  # 切換至 /tmp 目錄

$ mkdir git-practice       # 建立 git-practice 目錄

$ cd git-practice          # 切換至 git-practice 目錄

$ git init                 # 初始化這個目錄，讓 Git 對這個目錄開始進行版控

Initialized empty Git repository in /private/tmp/git-practice/.git/

λ git version 2.0.0

λ git config --global user.email "iachievedream@gmai.com"

λ git config --global user.name "iachievedream"

λ git config --list

λ ssh-keygen -t rsa -b 4096 -C "iachievedream@gmai.com"

get：SSH keys


~~~~
PS C:\Users\FU\Documents\code> ls
~~~~
//查看code資料夾內檔案
~~~~
PS C:\Users\FU\Documents\code> cd C:\Users\FU\Documents\git
~~~~
//進入git資料夾內
~~~~
PS C:\Users\FU\Documents\git> ls
~~~~
//查看git資料夾內檔案
~~~~
PS C:\Users\FU\Documents\git> git clone https://github.com/iachievedream/macwin10.git
~~~~
//使用https下載github平台的資料iachievedream/macwin10
~~~~
PS C:\Users\FU\Documents\git\macwin10> git status
~~~~
//查看此資料夾狀態


~~~~
PS C:\Users\FU\Documents\git\macwin10> git add .\code\
~~~~
//將此code資料夾加至git暫存區
~~~~
PS C:\Users\FU\Documents\git\macwin10> git commit -m"first filt push"
~~~~
//將暫存區設立資料還原點
~~~~
PS C:\Users\FU\Documents\git\macwin10> git push
~~~~
//上傳code資料夾上github


在test資料夾建立GIT版控，
-------
新增一個f1.txt檔案後，
提交一個新的版本
建立GIT版控

* mkdir test //建立test資料夾
* cd test    //進入test資料夾內
* git init   //下了init指令後，test資料夾會多了一個.git的版控資料夾

新增檔案1.txt：
-------
* echo Hello World > 1.txt  //echo 輸入檔案的內容>檔案名稱
* type 1.txt                //檢視1.txt的內容
* git add 1.txt             //加入git暫存區(Stage)
* git commit -m "add 1.txt" //提交版本至儲存庫(Repo)

# f1.txt待需軟體實作確認

好用指令
*git status            //查看目前檔案狀態
*git log               //查看提交詳細log檔(如果資料太長，按Q鍵離開)
*git log --oneline     //簡易log檔

# sourceTree完全不懂
