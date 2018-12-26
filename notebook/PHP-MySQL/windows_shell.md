appserv 教學
網址列輸入：http://localhost
帳號請填入：root
密碼請填入： a1234567

xampp安全

1.如何創建mysqld數據庫的管理用戶？

數據庫安裝好後，我們應該為mysql數據庫創建一個管理帳號。要把root用戶設置為管理員，我們應該運行下面的命令；

shell> mysqladmin -u root password 123456

通過上面的命令，我們可以知道，mysql數據庫的管理員是root，密碼是123456。

2.如何進入mysql數據庫？以mysql數據庫管理員root，密碼為123456為例；
shell> mysql -uroot -p123456

輸出上面的命令後，出現的是如下的提示；
Welcome to the MySQL monitor. Commands end with ; or /g.
Your MySQL connection id is 6 to server version: 3.23.58
Type 'help;' or '/h' for help. Type '/c' to clear the buffer.
mysql>
