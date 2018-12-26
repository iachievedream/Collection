<?php
	header('Content-Type: text/html; charset=utf-8');
	$username=$_POST['username'];
	$password=$_POST['password'];

	require("conn_mysql.php");

	$sql="SELECT * FROM Delivery_resume";
	$result = mysqli_query($db, $sql);
	if (mysqli_num_rows($result) > 0) {
	    while($row = mysqli_fetch_assoc($result)) {
	        echo $row["ID"].". ". $row["position"]."  of   ".$row["companyint"]."    have   ".$row["Reply"]."<br>";
	    }
	} else {
	    echo "0 结果";
}
?>
