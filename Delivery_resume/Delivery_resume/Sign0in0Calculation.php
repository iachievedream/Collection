<html>
	<head>
	</head>
	<body>
	<div id=body>
		<form method="POST" action="Sign0in0Calculation.php">
			Input the a：<input type="text" name="a"/><br>
			Input the b：<input type="text" name="b"/><br>
			<input type="submit" value="登入"/>
		</form>
		perimeter = 3.1412*(3*(a+b)-sqrt((3*a+b)*(a+(3*b))))
		<br>
		<br>

<?php
	$a = $_POST["a"];  //取得網址列傳來的變數h
	$b = $_POST["b"];  //取得網址列傳來的變數w

	$perimeter = 3.1412*(3*($a+$b)-sqrt((3*$a+$b)*($a+(3*$b))));

	echo "您的圓周長為".$perimeter;
?>
	</body>
</html>
