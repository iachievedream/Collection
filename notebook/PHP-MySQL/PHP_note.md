<a href="http://www.twhappy.com/index.php?action=show&no=96">PHP教學</a>
~~~
列印Hello, world!：
<?php echo "Hello, world!";/>

相加：
<?php
$atk = 100;
$damage = $atk + 10 * 2;
echo $damage;
?>

if else 語法
<?php 
$weather = "sunny";
if($weather = "raining"){
   echo "No, it is ".$weather;
}else{
   echo "Yeah, it is ".$weather;
}
?> 

字串相加
<?php 
$a = "我想學會"; 
$b = "PHP！"; 
$a = $a.$b;  //$a與$b的內容被結合後存入了變數$a的容器裡面 
echo $a;  //執行的結果會輸出「我想學會PHP！」 
?> 

比較運算子、邏輯運算子
<?php 
$a = (1>2 or 3<4);  //or兩端只要其中一個條件成立就會返回true。反之，返回false。 
var_dump($a);  //輸出變數$a的資料型態與內容 
echo '<br>'; 
$b = (1>2 and 3<4);  //and兩端條件皆成立才會返回true。反之，返回false。 
var_dump($b);  //輸出變數$b的資料型態與內容 
?> 

輸入變數：
index.php
<html>
	<head>
	</head>
	<body>
	<div id=body>
		<form method="POST" action="login_php.php">
			Input the H：<input type="text" name="h"/><br>
			Input the W：<input type="text" name="w"/><br>
			<input type="submit" value="登入"/>
		</form>
	</body>
</html>
***************************************
login_php.php
<?php 
	$h = $_POST["h"];  //取得網址列傳來的變數h 
	$w = $_POST["w"];  //取得網址列傳來的變數w 

	echo "您的BMI=".($w+$h)."<br>";  //輸出您的BMI 
	echo "您的BMI=".$w*$h;  //輸出您的BMI 
?> 


控制結構：if…，if…else…，if…elseif…else…，switch。

<?php 
$name = $_GET["name"];  //取得網址列傳來的變數name  

if($name!=""){  //會員登入時，顯示會員的暱稱 
  echo "暱稱：$name"; 
}else{  //否則顯示Guest（訪客） 
  echo "暱稱：Guest"; 
} 
?> 

迴圈：while，do…while，for，foreach

迴圈之一
相加總合：
<?php 
$a=1; 
while($a<=10){ 
  echo $a."<br>"; 
  $a++;  //$a=$a+1;的縮寫 
} 
?> 

相乘總合：
<?php 
$a=1; 
$b=1; 
while($a<=10){ 
  echo $a."-is-"; 
  $b=$a*$b; 
  $a++;  //$a=$a+1;的縮寫 
  echo $b."<br>"; 
} 

迴圈之二(一定會執行一次)
<?php 
$a = 1;
do{
  $a++;
  echo $a."<br>";
}while($a<10);
?> 

迴圈之三(一定會執行一次)
<?php 
for($c=1;$c<=10;$c++){ 
  echo $c."<br>"; 
} 
?> 

跳出迴圈(與三者迴圈相似)
<?php 
$a=1; 
while($a>0){ 
  echo $a."<br>"; 
  $a++;  //$a=$a+1;的縮寫，while每執行一圈$a就加１ 
  if($a>10) break;  //跳出迴圈 
} 
?> 

迴圈之繼續(跳至下次迴圈9)：將迴圈停止一下，又讓迴圈繼續的行為，鈔票點至有問題的停止，之後持續。
<?php 
for($c=1;$c<=10;$c++){ 
  if($c==8) continue; 
  echo "$c<br>"; 
} 
?> 

巢狀迴圈：
<?php 
while($a<9){  //外層迴圈 
  $a++; 
  $b=0; 
  while($b<9){  //內層迴圈 
    $b++; 
    echo $a."x".$b."=".$a*$b."<br>"; 
  } 
}  
?> 

排版過的九九乘法表：(關鍵如何排版)
<table cellpadding="5" cellspacing="5">
<tr>
<?php 
while($a<9){ 
  $a++; 
  $b=0; 
  echo "<td>"; 
  while($b<9){ 
    $b++; 
    echo $a."x".$b."=".$a*$b."<br>"; 
  } 
  echo "</td>"; 
}  
?> 
</tr>
</table>

陣列：
$student[1]="郝康德"; 

$student=array(  //陣列的名稱叫$student 
1=>"郝康德", 
2=>"孫大同");

$student=array( 
"",  //陣列的第一筆資料預設的鍵是0，因為沒有人，保留空白。 
"郝康德",  //這裡才是1號 
"孫大同"); 

<?php 
$fruit=array( 
"apple"=>"蘋果", 
"strawberry"=>"草莓", 
"orange"=>"柳橙"); 
?> 

二維陣列：
<?php 
$student = array( 
1=>array(1=>"蔡淑臻",2=>"李沛旭",3=>"溫昇豪",4=>"隋棠",5=>"宥勝"), 
2=>array(1=>"林凡",2=>"喻可唯",3=>"席曼寧",4=>"阿寶",5=>"迷你彬"), 
3=>array(1=>"溫瑞凡",2=>"謝安真",3=>"郝康德",4=>"溫瑞萱",5=>"藍天蔚") 
); 

$i = $_GET["i"];  //取得網址列傳來的變數i  
$j = $_GET["j"];  //取得網址列傳來的變數j  

if($i=="") $i=3; 
if($j=="") $j=2; 

echo "我最喜歡".$student[$i][$j]; 
?> 

陣列專用迴圈：
foreach(陣列名稱 as 陣列成員內容){
　子句;
}
或
foreach(陣列名稱 as 鍵=>陣列成員內容){
　子句;
}

<?php 
$student = array( 
314=>"溫瑞萱",114=>"隋棠",212=>"喻可唯",
214=>"阿寶",215=>"迷你彬",311=>"溫瑞凡",
115=>"宥勝",313=>"郝康德",111=>"蔡淑臻",
211=>"林凡",112=>"李沛旭",315=>"藍天蔚",
213=>"席曼寧",312=>"謝安真",113=>"溫昇豪"); 

foreach($student as $key=>$value){ 
  echo '$student['.$key."]：".$value."<br> "; 
} 
?> 

陣列排序用的函數：
http://www.twhappy.com/index.php?action=show&no=121

自訂函數
<?php 
function myname(){  //自訂函數名稱為 myname 
  echo "大魔王"; 
} 
myname();  //執行 myname函數 
?> 
也可以寫成這樣：
<?php 
myname();  //調用自訂函數的程式碼 
function myname(){ 
  echo "大魔王"; 
} 
?> 

自訂函數的引數
<?php 
function soup($food){  //自訂函數名稱為soup 
  if($food==""){  //如果沒有引數 
    echo "白開水"; 
  }else{  //如果有引數 
    echo $food."湯"; 
  } 
} 

$food = $_GET["food"];  //取得網址列傳來的變數food 

soup($food);  //執行自訂函數soup，引數為$food 
?> 

自訂函數中引數的預設值
<?php 
function breakfast($food="火腿蛋三明治"){ 
  if($food=="火腿蛋三明治"){ 
    echo "小明今天早餐吃".$food."。"; 
  }else{ 
    echo "小明今天早餐換個口味，吃".$food."。"; 
  } 
} 
breakfast();  //沒有引數時，$food為預設值 
echo "<br>"; 
breakfast("飯糰");  //有引數時，$food為引數 
?> 
>>>>>>>>>>>>>>>>>>>>>
小明今天早餐吃火腿蛋三明治。
小明今天早餐換個口味，吃飯糰。

自訂函數的陣列引數：
http://www.twhappy.com/index.php?action=show&no=155
<?php 
function dress($who){  //換裝的函數 
  $who = "換裝、化妝完畢的".$who; 
  return $who; 
} 
$actor = "女主角"; 
$actor = dress($actor);  //換裝，把回傳值存入變數$actor。 
echo $actor; 
?> 

日期與時間函數之一：
電腦的標準時間是以Unix紀元（格林威治時間1970年1月1日00:00:00）
開始計算，以本文撰寫時間（2012年2月24日下午3時49分3秒）為例：從Unix紀元開始到現在已經經過了1393224543秒，
這個秒數在地球上的任何時區都是一樣的，範例如下：
<?php 
$time=gettimeofday();  //取得現在時間 
echo $time[sec],"<br>";  //Unix紀元開始到現在的秒數 
?> 

日期與時間函數之二
<?php 
date_default_timezone_set("Asia/Taipei");  //設定時區 
echo date("Y年m月j日 G時i分s秒");  //第1個參數是時間格式；第2個參數是引數，沒有引數時，默認為現在時間。 
//date("Y-n-j G:i:s",1393224543);  //逗點之後的數值為引數。 
?> 

將字串與整數相加時…
<?php 
$a="貓"; 
$a=(int)$a;  //將變數$a整數化 
echo $a;  //結果輸出0 
?> 


~~~

PHP isset()和empty()的區別
--
isset判斷的是 "變數"

isset()函數是用來判斷變數是不是有存在，如果有就回傳 1(true)，如果沒有就回傳空值

empty判斷的是 "值"

empty()函數用來判斷"值"是不是空的，如果沒有就回傳 1(true)，如果有"值"就不回傳


1. 變數值為NULL的時候，isset會把變數當成不存在；但empty不會

2. 變數值為0的時候，isset判斷的是變數，所以回傳true；但是empty會把0當成空值，所以也會回傳true

3. 變數值為空字串的時候，isset判斷的是變數，所以回傳true；empty判斷的是值，所以回傳true
