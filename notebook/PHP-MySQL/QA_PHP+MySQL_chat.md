<a href="https://wmos.info/archives/109">基於PHP+MySQL的聊天室設計</a>

phpMyAdmin：
~~~
localhost：localhost
username ：123456
password ：123456
  data   ：data
  table  ：chat

MySQL：(in data.)
CREATE TABLE chat
(chtime DATATIME,
nick CHAR(10) NOT NULL,
words CHAR(150));

Q&A：DATATIME>no,so input TIME .

建立頁框的結構（main.php）
顯示大家發言的程式段（cdisplay.php）
傳送用戶發言的程式段（speak.php）
用戶登錄進入聊天室程式段（login.php）
~~~


用戶登錄進入聊天室程式段（login.php）
~~~
<html>
<head>
<title>用戶登錄</title>
</head>
<body>請輸入您的昵稱<br>
<form action="main.php" method="post" target="_self">
<input type="text" name="nick" cols="20">
<input type="submit" value="登錄">
</form>
</body>
</html>

Q&A：
target="_self"。在框架內直接開啟連結，若無框架則等同於直接在同一的視窗開啟。

~~~

建立頁框的結構（main.php）
~~~
<?
setcookie("nick",$nick) //用cookie記錄用戶昵稱,是常用的傳遞變數方法
?>
<html>
<title>山西鋁廠聊天室試用版ver1.0</title>
<frameset rows="80%,*">
<frame src=" cdisplay.php" name="chatdisplay">
<frame src="speak.php" name="speak">
</frameset>
</html>
~~~

顯示大家發言的程式段（cdisplay.php）
~~~
<html>
<head>
<title>顯示用戶發言</title>
<meta http-equiv="refresh" content="5;url=cdisplay.php">
</head>
<body>
<?
$link_ID=mysql_connect("localhost","123456","123456","data");
//鏈結Mysql伺服器 伺服器名為localhost,管理員名為123456,選擇資料庫data
$str="select * from chat ORDER BY chtime;" ; //查詢字串
$result=mysql_query($str, $link_ID); //送出查詢
$rows=mysql_num_rows($result); //取得查詢結果的記錄筆數
//取得最後15筆發言，並顯示
@mysql_data_seek($resut,$rows-15); //移動記錄指標到前15筆記錄
if ($rows<15) $l=$rows; else $l=15; //記錄總數小於15，則最多為該記錄數
for ($i=1;$i<=$l;$i++) {
list($chtime,$nick,$words)=mysql_fetch_row($result);
echo $chtime; echo " ";echo $nick; echo":" ; echo $words; echo "<BR>";} //清除庫中過時的資料
@mysql_data_seek($result,$rows-20); //移動記錄指標到前20筆記錄
list($limtime)=mysql_fetch_row($result);
$str="DELETE FROM chat WHERE chtime<'$limtime' ;" ;
$result=mysql_query($str,$link_ID); //送出查詢字串,庫中只留前20個記錄
mysql_close($link_ID);
?>
</body>
</html>
~~~

傳送用戶發言的程式段（speak.php）
~~~
<html>
<head>
<title>發言</title>
</head>
<body>
<?
If ($words)
{ $link_ID=mysql_connect("localhost","123456","123456","data");
$time=date(y).date(m).date(d).date(h).date(i).(date(s); //取得當前時間
$str="INSERT INTO chat(chtime,nick,words) values('$time','$nick','$words');" ;
mysql_query($str,$link_ID); //送出發言到資料庫
mysql_close($link_ID);
}
?>
//輸入發言的表單

<form action="speak.php" method="post" target=" _self">
<input type="text" name="words" cols="20">
<input type="submit" value="發言">
</form>

</body>
</html>
~~~



