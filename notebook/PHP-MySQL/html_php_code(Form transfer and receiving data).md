html php 表單傳送與接收資料

phpmyadmin教學

檔名:index.php
--
~~~
<html>
<head>
<meta charset="utf-8">
<title>html-PHP-MySQL(runoob.com)</title>
</head>

<body>

<?php
$servername = "localhost";
$username = "123456";
$password = "123456";

// 创建连接
$conn = new mysqli($servername, $username, $password);

// 检测连接
if ($conn->connect_error) {
    die("连接失败: " . $conn->connect_error);
}
echo "连接成功";
?>

<form action="welcome.php" method="post">
	名字: <input type="text" name="fname">
	年龄: <input type="text" name="age">
	<input type="submit" value="提交">
</form>

<form action="b.php" method="get">
  GET傳送<br>
  姓名：<input name="user_name" type="text">
  密碼：<input name="user_pass" type="password">
  <input name="submit" type="submit" value="login">
</form>

<form action="c.php" method="post">
  POST傳送<br>
  姓名：
  <input name="user_name" type="text">
  密碼：<input name="user_pass" type="password">
  <input name="submit" type="submit" value="login">
</form>

</body>
</html>
~~~

檔名:welcome.php
--
~~~
欢迎<?php echo $_POST["fname"]; ?>!<br>
你的年龄是 <?php echo $_POST["age"]; ?>jear。
~~~

檔名:b.php
--
~~~
姓名： <?php echo $_GET["user_name"]; ?>  。
密碼： <?php echo $_GET["user_pass"]; ?>  。
~~~

檔名:c.php
--
~~~
姓名： <?php echo $_POST["user_name"]; ?>  。
密碼： <?php echo $_POST["user_pass"]; ?>  。
~~~

PHP 连接 MySQL>>连接成功
===
~~~
<?php
$servername = "localhost";
$username = "username";
$password = "password";

// Create connection
$conn = new mysqli($servername, $username, $password);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";
?>
~~~

Create a MySQL Database Using MySQLi and PDO
--
The CREATE DATABASE statement is used to create a database in MySQL.
The following examples create a database named "myDB":
~~~
<?php
$servername = "localhost";
$username = "username";
$password = "password";

// Create connection
$conn = new mysqli($servername, $username, $password);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Create database
$sql = "CREATE DATABASE myDB";
if ($conn->query($sql) === TRUE) {
    echo "Database created successfully";
} else {
    echo "Error creating database: " . $conn->error;
}

$conn->close();
?>
~~~

The following examples shows how to create the table in PHP:

~~~
CREATE TABLE MyGuests (
id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
firstname VARCHAR(30) NOT NULL,
lastname VARCHAR(30) NOT NULL,
email VARCHAR(50),
reg_date TIMESTAMP
)
~~~

~~~
<?php
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "myDB";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// sql to create table
$sql = "CREATE TABLE MyGuests (
id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
firstname VARCHAR(30) NOT NULL,
lastname VARCHAR(30) NOT NULL,
email VARCHAR(50),
reg_date TIMESTAMP
)";

if ($conn->query($sql) === TRUE) {
    echo "Table MyGuests created successfully";
} else {
    echo "Error creating table: " . $conn->error;
}


$conn->close();
?>
~~~

The following examples add a new record to the "MyGuests" table:

~~~
INSERT INTO table_name (column1, column2, column3,...)
VALUES (value1, value2, value3,...)
~~~

~~~
<?php
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "myDB";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('John', 'Doe', 'john@example.com')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
~~~

PHP Get ID of Last Inserted Record

~~~
if ($conn->query($sql) === TRUE) {
    $last_id = $conn->insert_id;
    echo "New record created successfully. Last inserted ID is: " . $last_id;
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}
~~~

PHP Insert Multiple Records Into MySQL

Example (MySQLi Object-oriented)
~~~
$sql = "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('John', 'Doe', 'john@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Mary', 'Moe', 'mary@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Julie', 'Dooley', 'julie@example.com')";

if (mysqli_multi_query($conn, $sql)) {
    echo "New records created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

~~~
