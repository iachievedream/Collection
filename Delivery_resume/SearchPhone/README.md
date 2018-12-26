MySQL
~~~
localhost
username：id7347169_user
database：id7347169_data
table：namephone

建立/刪除 data 資料庫
create database data;

建立/刪除 namephone 資料表
簡易
create table namephone
(id int(9),name char(10),phone int(10),money int(9));

詳細：
CREATE TABLE namephone (
id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
name char(5) NOT NULL,
phone char(10) NOT NULL,
money int,
totle INT(6) unique,
ex VARCHAR(30));

新增資料
insert into namephone (name,phone,money) values
('chan'  ,'0955813556','700'),
('henny' ,'0958464724','1000'),
('cken'  ,'0958435484','2000'),
('honner','0916213264','200');
~~~
