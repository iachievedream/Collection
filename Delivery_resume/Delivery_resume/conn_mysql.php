<?php
	$db=mysqli_connect("localhost","$username","$password","mydata");//mysqli_connect判断是否成功连接上了 MySQL 数据库
	if(!$db){
		die("date Connection failed<br>");//die() 函数输出一条消息，并退出当前脚本。
	}else{
		echo"date Connection successfully<br>";
	}
?>
