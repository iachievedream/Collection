MySQL Command Line Client 教學
~~~
mysql>
create database MyData;  //建立一個資料庫
mysql>
show databases;          //顯示你所有的資料庫
mysql>
use MyData;             //進入MyDate資料庫

mysql>                        //建立資料表
create table nametable(
ID int(6) auto_increment primary key,
Name varchar(30),
Age int,
phone varchar(10),
country varchar(30)
);

create table mydata.phone(
ID int(3) not null auto_increment primary key,     
name varchar(30),
url varchar(30),
alexa int,    
country varchar(30)    
);

mysql>
show tables;              //顯示你的資料表

mysql>
insert into nametable(Name,Age,phone)
values("hany",18,"02-5186248"); //插入複數資料：

INSERT INTO nametable (Name,Age,phone) values
('chan','25','02-5186256'),
('nick','13','02-5186248'),
('NFHC','25','02-2442421'),
('NFCd','30','02-5186385'); //插入複數資料：

mysql>
select * from nametable;    //查詢資料select

DELETE * FROM nametable;   //刪除資料
~~~

比較常用到的mysql指令如下 : (注意分號 字母結尾es)
(1)show databases;   顯示你所有的資料庫
(2)create database [databasename];    建立一個資料庫。
比方說要建立一個名為booklist的資料庫create database  booklist ;
(3)drop database [databasename]; 刪除資料庫。
比方說要刪除一個名為booklist的資料庫 drop database   booklist ;
(4)use [databasename] ;  use的功能是用來切換資料庫的，假如你原本使用booklist資料庫，現在要切換成另外一個price的資料庫，就是use price;
(5)create table[table name](field type,field type,..) 建立表格，建立表格之前一定要先切換使用資料庫，不然就等於你根本沒告訴電腦你要使用哪一個資料庫，這樣表格要建在哪呢?~
(6)drop table [tablename];

************************************
