phpMyAdmin架構：
~~~
localhost：localhost
username：visitor
password：visitor
 table  ：visitor，namephone

資料庫：
  data >>mytable
         namephone
         spend

  visitor>>namephone

如需在php執行MySQL指令則外圍加上$sql=" 指令 "; 即可。
如：   $sql="INSET INTO book(authorid,title,ISBN) VALUES(6,"abc","146434")";
~~~
指令整理：資料操作語言 ( DML ) select，insert，update，delete。
~~~
登入MySQL:
mysql -u root -p
輸入密碼
show database;

SELECT * FROM $table WHERE (條件查詢)
SELECT DISSTINCT * FROM $table  (不重複查詢)
SELECT * FROM $table LIMTT (限制查詢資料)
SELECT * FROM cmdev.emp   （查詢cmdevy資料庫中的emp表格）
DELETE * FROM(刪除資料)

ORDER BY id ASC,(由小往大)
ORDER BY id DESC,(由大往小)
ex.SELECT name FROM namephone ORDER BY id ASC;

GROUP BY (計算總數)
SELECT name, SUM(mony) FROM namephone GROUP BY name;(計算單一人總金額)

別名(as)：SELECT ID as number,Name as chester FROM city
****************************
由 txt 文字檔匯入資料 (用 tap 隔開欄位)
load data local infile "c:\\data.txt" into table mytable
~~~
資料庫操作
~~~
建立data資料庫：
CREATE DATABASE data;

use data
建立namephone資料表：
CREATE TABLE namephone (
	id          INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
	name        VARCHAR(30) NOT NULL,
	nomey       INT(6),
	ex          VARCHAR(30)  
);

注:PRIMARY KEY：主鍵限制,
    unique：唯一限制,
    NOT NULL：不為空
    VARCHAR：以動態的方式儲存(CHAR為靜態儲存)
    TEXT：儲存文字。

插入資料表：
INSERT INTO namephone (name,phone,mony) values
('NlGU','16465862','124543'),
('NlCU','16132422','145423'),
('NFHC','16544542','134525'),
('NFCd','16632132','135254');

查詢namephone資料表：(*為全部內容)
SELECT * FROM namephone;
~~~
範例：
~~~
authorid,title,ISBN

建立資料表
CREATE TABLE chester (
	id           INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
	name         VARCHAR(30) NOT NULL,
	day          VARCHAR(30) NOT NULL,
	breakfast    INT(6),
	luncht       INT(6),
	dinner       INT(6),
	Night        INT(6),
	traffic      INT(6),
	totle        INT(6) unique,
	ex           VARCHAR(30)  
)

插入資料表
INSERT INTO chester (name,day,breakfast,luncht,dinner,Night,traffic)
VALUES
(‘chan','1月1日','42','24’,'34','42','24'),
('chan','1月2日','56','55','52','55','66'),
('chan','1月3日','52','55','22','55','66'),
('chan','1月4日','25',’35','22','55','66'),
('chan','1月5日','22',’35','55','55','66'),
('chan','1月6日','56','55','22','22','75');

相加MySQL函式指令：
SELECT totle ,SUM(breakfast) AS totle2 FROM chester
注：totle：unique，totle2建立在哪攔，chester從哪個表格。`totle`與totle相同執行功能。

正確sum：
SELECT id ,SUM(breakfast+luncht+dinner+Night+traffic) AS totle FROM chester GROUP BY id
SELECT id：以id為排列依據。SUM：相加畫號內的數值。AS：列入哪攔。FROM：從哪個資料表。GROUP BY：以誰為『群』分類(不重複)。

id需選擇的項目不含唯一(Unique)的資料欄位，將無法執行表格的編輯/核選、編輯、複製、刪除等相關的功能。
~~~

尚未整理
~~~
CREATE UNIQUE INDEX catename ON moneybook
CREATE UNIQUE INDEX catename FROM  moneybook

alter table moneybook add unique index(spend,id)
(要有主key)

alter table $table add unique index(day,spend)   資料表，列，
~~~

<a href="https://pjchender.blogspot.com/2015/03/php-mysql-phpmyadmin.html">[教學] PHP & MySQL 學習筆記 第八堂（資料庫建置：phpMyAdmin資料庫建置並呈現於網頁）</a>
~~~
mysql_connect("主機名稱","帳號","密碼")：連接伺服器
mysql_select_db("資料庫名稱")：選擇欲讀取的資料庫名稱
mysql_query("set names utf8")：將資料設為utf8格式（才能讀取中文）
mysql_query("select * from 資料庫名稱")：從某資料庫中讀取所有的（*）資料表
mysql_num_rows( )：回傳我們的資料有幾個列
mysql_fecth_rows( )：讀取該資料表中列的資料，回傳的是一列資料。
~~~


連接PDO資料庫
---
~~~
	$db = new PDO ("localhost                          ","$username","$password");
 	$db = new PDO ("mysql:host=localhost;dbname=library","$username","$password");
~~~
與資料庫互動
---
~~~
	$db->_query("SELECT * FROM test WHERE title="Roots");

	$statement=$db->prepare("SELECT * FROM test");
	$statement->execute();

	//一次取得一列
	white ($row = $statement->fetch() {
	  print_r($row);
	    //用每個回傳值做些事
	}
	$statement = null;//釋放statement
~~~

MySQLi物件介面
===
建立物件$db，SQL指令存至變數$sql
~~~
  $db=mew mysqli("localhost","$username","$password");

  $sql="INSET INTO book(authorid,title,ISBN) VALUES(6,"abc","146434")";

	if($db->query($sql)){
    echo "book data saved successfully";
    }
    else{
		echo"INSET attempt faild,please try again later later,or call tech support";
	}
  $db->close();
~~~

~~~
<?php
	$db_link=@mysqli_connect("localhost","$username","$password");
	if(!$db_link){
		die("資料庫連線失敗<br>");
	}else{
		echo"資料庫連線成功<br>";
	}
	mysqli_query($db_link,"SET NAMES 'utf-8'");  //設定字元集與編碼為utf-8
	$seldb=@mysqli_select_db($db_link,"world");
	if(!$seldb){
		die("資料庫選擇失敗<br>");
	}else{
		echo"資料庫選擇成功<br>";
	}
?>

$db_link簡單變數，非指令。
~~~
