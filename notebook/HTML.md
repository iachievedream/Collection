軟體：Sublime，kompozer，NotePad++

<a href="https://www.w3schools.com">W3Schools</a>

<a href="http://www.runoob.com/">菜鸟教程</a>

Online compiler：<a href="https://codepen.io">CodePen</a>

教學：淺談 Sublime Text 的安裝設定及入門操作 – [ 下篇 ]

介紹範例：html:5

在網頁中使用jquery
~~~
<script src="http://code.jquery.com/jquery-3.1.1.min.js"></script>
~~~
相似
~~~
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
~~~

資料來源：https://ithelp.ithome.com.tw/articles/10185668

<a href="http://css-teach.7happy.com.tw/css-border.php">CSS 教學</a>

<a href="http://www.runoob.com/nodejs/nodejs-express-framework.html">Node.js Express 框架</a>

~~~
<html>   <!--,-->註解
/* This is a single-line comment */註解
<script>JaveScript<script>  //註解
分割區塊:<div>，<span>
~~~

easy HTML:

~~~
<!DOCTYPE html>
<html>
<head>
<title>Page Title</title>標題名稱
</head>

<body>
<h1>This is a Heading</h1>
<p>This is a paragraph.</p>
</body>
</html>
~~~

**

~~~
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Page Title</title>

<style>css</style>
<link rel="stylesheet" type="text/css" href="11a.css"> 文件與外部資源的關係
~~~

內容11a.css

~~~
h1 {
    color: white;
    text-align: center;
}
~~~

**

~~~
h1 {
    color: white;
    text-align: center;
    background-color: lightblue;
    font-family: verdana;
    font-size: 20px;
    background-color: #00539F;
}

#a123{text-align: center;}     <p id="a123">Hello World!</p>
.b123 {color: red;}            <h4 class="a123">Red</h4> 
p.center {color: red;}         <p class="center">red</p> 

h1, h2, p {color: red;}        <h1>Hello World!</h1>    <h2>Smaller heading!</h2>

</head>
<body>

<h1>This is a Heading</h1>
<p>This is a paragraph.</p>

<img src="images/firefox-icon.png" alt="My test image">

<a href="https://www.mozilla.org/">Mozilla</a>

直接使用CSS：<h1 style="color:blue;margin-left:30px;">This is a heading</h1>

</body>
</html>
~~~

附屬資料：

~~~

<head>
<script src="abc1.js"><<script>

資料內容abc1.js
alert("this is External Script");

直接使用：
<script>alert("this is External Script");<script>

~~~

***
Factorial Html Presentation
---
~~~
<html>
 <head>
   <style>
     #container {width:450px}
     #header {background-color:#FFFF00;}
     #menu {background-color:#FF00FF;
            height:200px;
            width:40%;
            float:left;}
     #sandwich{width:20%;
            background-color:#EEEEEE;
            float:left;
            height:200px}
     #content {background-color:#e10000;
               height:200px;
               width:40%;
               float:left;}
     #footer {background-color:#FFA500;
              clear:both;
              text-align:center;}
     h1 {margin-bottom:0;
         text-align:center;}
    </style>
</head>
<body>
 <div id="container" >
   
<!-- ▼以下DIV區是主圖banner區▼ -->
   <div id="header">
     <h1 >階乘程式碼</h1>
   </div>
  
  <!-- ▼以下DIV區是選單區▼ -->
   <div id="menu" >
      <p>階乘程式碼</p>
   </div>
   <div id="sandwich" >
     <p>void</p> 
   </div>
   <div id="content">
     <p>變數次方函數 程式碼</p>
   </div>
   <div id="footer">
     階層所有
   </div>
 </div>
</body>
</html>
~~~

MY Englsh Translstion
---
~~~
<html>
  <head>
    <title>MY Englsh Translstion</title>
    <meta http-equiv="countant-Type" contant="text/html" ;charset="uft-8">
    <style>
      #body
      #leftnotebook{background-color:#0099FF;heigh:100px;width:45%;float:left;}
      #rightnotebook{background-color:#FFFF99;heigh:100px;width:45%;float:rignt;}
      #chinesecontant{border:5px;solid:red;}
    </style>
      
<body>
  <div id=body>
    <center> <h1>Hi! my English translation notebooke</h1></cention>
    <div id=leftnotebook >
      <h3>chinese is not tanslation</h3>
      <div id=chinesecontant>
        plaese input something in any time and any place
      </div>
    </div>
    <div id=rightnotebook>
         <h3>english is tanslatied</h3>
      <div id=chinesecontant>
        plaese output result contant
      </div>
    </div>
    </div>
</div>
~~~

html table
---

<!DOCTYPE>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />  <!--常用屬性-->
<title>table structure</tetle>                                         <!--網站上標-->
</head>

<body>                                <!--網站內容-->
<table width="200" border="0">
 <thead>                              <!--表格上層-->
  <tr>                                <!--表格第一欄-->
    <th>thead</th>                    <!--表格第一欄第一列-->
    <th>tr</th>                       <!--表格第一欄第二列-->
    <th>th</th>                       <!--表格第一欄第三列-->
    <th>/thead</th>                   <!--表格第一欄第四列-->
  </tr>                               <!--表格第一欄結尾-->
 </thead>                             <!--表格上層結尾-->
 <tbody>                              <!--表格中間層-->
  <tr>                                <!--表格第二欄-->
    <td>tbody</td>                    <!--表格第二欄第一列-->
    <td>tr</td>                       <!--表格第二欄第二列-->
    <td>td</td>                       <!--表格第二欄第三列-->
    <td>/tbody</td>                   <!--表格第二欄第四列-->
  </tr>
 </tbody>
 <tfoot> 
  <tr>
    <td>tfoot</td>
    <td>tr</td>
    <td>td</td>
    <td>/tfoot</td>
  </tr>
 </tfoot> 
</table>
</body>
</html>

~~~
<!DOCTYPE>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />  <!--常用屬性-->
<title> table structure </tetle>                                         <!--網站上標-->
</head>

<body>                                <!--網站內容-->
<table width="200" border="0">
 <thead>                              <!--表格上層-->
  <tr>                                <!--表格第一欄-->
    <th>thead</th>                    <!--表格第一欄第一列-->
    <th>tr</th>                       <!--表格第一欄第二列-->
    <th>th</th>                       <!--表格第一欄第三列-->
    <th>/thead</th>                   <!--表格第一欄第四列-->
  </tr>                               <!--表格第一欄結尾-->
 </thead>                             <!--表格上層結尾-->
 <tbody>                              <!--表格中間層-->
  <tr>                                <!--表格第二欄-->
    <td>tbody</td>                    <!--表格第二欄第一列-->
    <td>tr</td>                       <!--表格第二欄第二列-->
    <td>td</td>                       <!--表格第二欄第三列-->
    <td>/tbody</td>                   <!--表格第二欄第四列-->
  </tr>
 </tbody>
 <tfoot> 
  <tr>
    <td>tfoot</td>
    <td>tr</td>
    <td>td</td>
    <td>/tfoot</td>
  </tr>
 </tfoot> 
</table>
</body>
</html>
~~~

~~~

<html>
    <head>
        <title>hi<title>
    </head>
<body>
    <h2 id="title">click counts: <span id="counter">1</span></h2>
    <button id="btn">click me</button>
    <script>
      var btn=document.querySelector('#btn');
      var count=1;
      btn.addEventListener('click',funtion(){
        count++;
        document.querySelector('#counter').innerHTML=count;
        })
        
    </script>
</body>
</html>
~~~
