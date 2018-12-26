<a href="http://hsingjungchen.blogspot.com/2017/08/phpmysql.html">PHP與MySQL登入範例</a>

主機：localhost

資料庫名稱：world

資料表：books與employee。

***
login.html：(軟體如果是MAMP則須改檔名為index.php)

mysqli_query(MySQL查詢指令的變數)，函数执行某个针对数据库的查询。
~~~
if ($db->query($sql) === TRUE) {
	//正確則為執行
	}
相同含意：
if (mysqli_query($db, $sql)) {
	//正確則為執行
	}
~~~

mysqli_select_db(連接狀態的數值,"資料庫名稱")

mysqli_connect() 函数打开一个到 MySQL 服务器的新的连接。

需煥至其他資料庫則使用：mysqli_select_db($db_link,"資料庫名稱") 函数用于『更改』连接的默认数据库。

***
登入變數設定：
~~~
	header('Content-Type: text/html; charset=utf-8');
	$host=$_POST['localhost'];
	$username=$_POST['username'];
	$password=$_POST['password'];
	$database=$_POST['database'];
	$table=$_POST['table'];

	$db=new mysqli("$host","$username","$password","$database");
~~~
指令說明：
~~~
$conn = new mysqli("$host","$username","$password","$database");
$db=mysqli_connect("$host","$username","$password","$database");
//new mysqli與mysqli_connect判断是否成功连接上了 MySQL 数据库
注意：要完整為"$host","$username","$password","$database"的數值。

$sql="SELECT * FROM $table";  //查詢$table資料表

Q:$seldb=mysqli_select_db($db,"$database");//mysqli_select_db() 函数用于更改连接的默认数据库。
~~~
連接資料庫：
~~~
实例 (MySQLi - 面向对象)：
	// 创建连接
	$conn = new mysqli($host, $username, $password);

	// 检测连接
	if ($conn->connect_error) {
	    die("连接失败: " . $conn->connect_error);
	}
	echo "连接成功";

实例 (MySQLi - 面向过程)：
	$db=mysqli_connect("$host","$username","$password");

	// 检测连接
	if (!$db) {
	    die("Connection failed: " . mysqli_connect_error());
	}
	echo "连接成功";
~~~
建立資料庫(Create database)：
~~~
	$db=new mysqli("$host","$username","$password","$database");
	$sql = "CREATE DATABASE $database";
	if ($db->query($sql) === TRUE) {
	    echo "Database created successfully";
	} else {
	    echo "Error creating database: " . $db->error;
	}
~~~
建立資料表(sql to create table)：
~~~
	$db=new mysqli("$host","$username","$password","$database");
	$sql = "CREATE TABLE $table (
		id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
		firstname VARCHAR(30) NOT NULL,
		lastname VARCHAR(30) NOT NULL,
		email VARCHAR(50),
		reg_date TIMESTAMP
		)";

	if ($db->query($sql) === TRUE) {
	    echo "Table "."$table"." created successfully";
	} else {
	    echo "Error creating table: " . $db->error;
	}
~~~
後五段可換成以下替換：
~~~
	if (mysqli_query($db, $sql)) {
	    echo "数据表" ."$table"."创建成功";
	} else {
	    echo "创建数据表错误: ";
	}
	mysqli_close($db);
~~~

建立資料表格式：
<a href="http://www.runoob.com/sql/sql-datatypes.html">SQL 用于各种数据库的数据类型</a>
~~~
	CREATE TABLE $table (
	id          INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,  //PRIMARY KEY 约束唯一标识数据库表中的每条记录。
	firstname   VARCHAR(30) NOT NULL,   //保存可变长度的字符串
	lastname    VARCHAR(30) NOT NULL,
	email       VARCHAR(50),
	reg_date    TIMESTAMP   //时间戳
	)
~~~

插入資料表；
~~~
实例 (MySQLi - 面向对象)
<?php
	$servername = "localhost";
	$username = "username";
	$password = "password";
	$dbname = "myDB";

	// 创建连接
	$conn = new mysqli($servername, $username, $password, $dbname);
	// 检测连接
	if ($conn->connect_error) {
	    die("连接失败: " . $conn->connect_error);
	}

	$sql = "INSERT INTO MyGuests (firstname, lastname, email)
	VALUES ('John', 'Doe', 'john@example.com')";

	if ($conn->query($sql) === TRUE) {
	    echo "新记录插入成功";
	} else {
	    echo "Error: " . $sql . "<br>" . $conn->error;
	}

	$conn->close();
?>

PHP MySQL 插入多条数据：
$sql = "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('John', 'Doe', 'john@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Mary', 'Moe', 'mary@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Julie', 'Dooley', 'julie@example.com')";

if ($conn->multi_query($sql) === TRUE) {
    echo "新记录插入成功";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}



实例 (MySQLi - 面向过程)
<?php
	$servername = "localhost";
	$username = "username";
	$password = "password";
	$dbname = "myDB";

	// 创建连接
	$conn = mysqli_connect($servername, $username, $password, $dbname);
	// 检测连接
	if (!$conn) {
	    die("Connection failed: " . mysqli_connect_error());
	}

	$sql = "INSERT INTO MyGuests (firstname, lastname, email)
	VALUES ('John', 'Doe', 'john@example.com')";

	if (mysqli_query($conn, $sql)) {
	    echo "新记录插入成功";
	} else {
	    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
	}

	mysqli_close($conn);
?>

PHP MySQL 插入多条数据：
$sql = "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('John', 'Doe', 'john@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Mary', 'Moe', 'mary@example.com');";
$sql .= "INSERT INTO MyGuests (firstname, lastname, email)
VALUES ('Julie', 'Dooley', 'julie@example.com')";

if (mysqli_multi_query($conn, $sql)) {
    echo "新记录插入成功";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}


实例 (PDO)
<?php
	$servername = "localhost";
	$username = "username";
	$password = "password";
	$dbname = "myDBPDO";

	try {
	    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
	    // 设置 PDO 错误模式，用于抛出异常
	    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
	    $sql = "INSERT INTO MyGuests (firstname, lastname, email)
	    VALUES ('John', 'Doe', 'john@example.com')";
	    // 使用 exec() ，没有结果返回
	    $conn->exec($sql);
	    echo "新记录插入成功";
	}
	catch(PDOException $e)
	{
	    echo $sql . "<br>" . $e->getMessage();
	}

	$conn = null;
?>


try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    // 开始事务
    $conn->beginTransaction();
    // SQL 语句
    $conn->exec("INSERT INTO MyGuests (firstname, lastname, email)
    VALUES ('John', 'Doe', 'john@example.com')");
    $conn->exec("INSERT INTO MyGuests (firstname, lastname, email)
    VALUES ('Mary', 'Moe', 'mary@example.com')");
    $conn->exec("INSERT INTO MyGuests (firstname, lastname, email)
    VALUES ('Julie', 'Dooley', 'julie@example.com')");

    // 提交事务
    $conn->commit();
    echo "新记录插入成功";
}
catch(PDOException $e)
{
    // 如果执行失败回滚
    $conn->rollback();
    echo $sql . "<br>" . $e->getMessage();
}

$conn = null;
?>
~~~
插入資料表格式；
~~~
INSERT INTO $table (firstname, lastname, email)	VALUES ('John', 'Doe', 'john@example.com')
~~~
列印資料庫：
~~~
实例 (MySQLi - 面向对象)
	$sql = "SELECT id, firstname, lastname FROM MyGuests";
	$result = $conn->query($sql);

	if ($result->num_rows > 0) {
	    // 输出数据
	    while($row = $result->fetch_assoc()) {
		echo "id: " . $row["id"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "<br>";
	    }
	} else {
	    echo "0 结果";
	}

实例 (MySQLi - 面向过程)
	require("conn_mysql.php");	//require程序在执行前就会先导入要引用的文件；與include 相同只是include 不會退出
	$sql="SELECT * FROM $table";
	$result = mysqli_query($db, $sql);
	if (mysqli_num_rows($result) > 0) {
	    while($row = mysqli_fetch_assoc($result)) {
	        echo $row["Name"]."--is-- ". $row["Code"] ."<br>";
	    }
	} else {
	    echo "0 结果";
	}
~~~
>require("conn_mysql.php");	//require程序在执行前就会先导入要引用的文件；與include 相同只是include 不會退出

可換成以下兩種指令：

>$db=new mysqli("$host","$username","$password","$database");  //為MySQL之連接狀態
>$db=mysqli_connect("$host","$username","$password","$database");
