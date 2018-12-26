index.php
~~~~
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	</head>
	<body>
	<div id=body>
	<center> <h1>Hi! my data notebooke</h1></cention>
		<form method="POST" action="login_php.php">
			Input the username：<input type="text" name="username"/><br>
			Input the password：<input type="Password" name="password"/><br>
			<input type="submit" value="登入"/>
		</form>
		<br>
		<a href="Sign0in0Calculation.php">圓周長計算</a><br>
		<a href="now.php">java</a><br>
	</div>
	</body>
</html>
~~~~
now.php
~~~
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	</head>
	<body>
	<div id=body>
	<center> <h1>Hi! my data notebooke</h1></cention>
		<form method="POST" action="now.jsp">
			Input the num<input type="text" name="num"/><br>
			<input type="submit" value="登入"/>
		</form>
		<br>
	</div>
	</body>
</html>
~~~
now.jsp
~~~
<html>
<%@ page contentType="text/html; charset=Big5"%>
<%=
string num1=reguest.getParameter(num);
		int num;
		num=Integer.parseInt(num1);

		int i, sum;
		for (i = 1, sum = 0; i <= num; i++) {       //迴圈
			sum+=Math.pow(i,2);                  //sum=sum+i^2
		}
		return sum;
        out.println("Secondary addition from 1 to "+num+" is "+x);
%>
</html>
~~~

