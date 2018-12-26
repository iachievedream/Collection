編譯軟體：Sublime Text
***
<a href="https://ithelp.ithome.com.tw/users/20107247/ironman/1312?page=1">從無到有，打造一個漂亮乾淨俐落的 RESTful API</a>

<a href="https://ithelp.ithome.com.tw/users/20103526/ironman/1081">Node.JS - 30 天入門學習筆記 </a>

<a href="http://www.runoob.com/nodejs/nodejs-tutorial.html">Node.js 教程</a>

確認是否安裝：
Opern this terminal.
$ node -v
v4.4.3

NPM 使用介绍

npm -v

npm 安装 Node.js 模块语法格式如下：

$ npm install <Module Name>
  
$ npm install express

***
.help 查看所有命令

process.exit();//进程退出

Ctrl+D//进程退出
***
直接在terminal編譯、執行。

$ node

> console.log('Hello World!');

Hello World!


檔名：helloworld.js
~~~
console.log("Hello World");
~~~
儲存該檔案，並透過Node.js來執行：

Opern this terminal.

command：<code>node helloworld.js</code>

正常的話，就會在終端輸出：terminal：Hello World 





建構應用的模組
---
檔名：server.js
~~~
var http = require("http");

http.createServer(function(request, response) {
  response.writeHead(200, {"Content-Type": "text/plain"});
  response.write("Hello World");
  response.end();
}).listen(8888);
~~~
搞定！你剛剛完成了一個可以工作的HTTP伺服器。

為了證明這一點，我們來運行並且測試這段程式碼。

首先，用Node.js執行你的腳本：

command：

<code>node server.js</code>

接下來，打開瀏覽器存取：

http://localhost:8888/

你會看到一個寫著 "Hello World" 的網頁。

***
Node.js GET/POST请求
---
檔名：index.js
~~~
var http = require('http');
var querystring = require('querystring');
 
var postHTML = 
  '<html><head><meta charset="utf-8"><title>菜鸟教程 Node.js 实例</title></head>' +
  '<body>' +
  '<form method="post">' +
  '网站名： <input name="name"><br>' +
  '网站 URL： <input name="url"><br>' +
  '<input type="submit">' +
  '</form>' +
  '</body></html>';
 
http.createServer(function (req, res) {
  var body = "";
  req.on('data', function (chunk) {
    body += chunk;
  });
  req.on('end', function () {
    // 解析参数
    body = querystring.parse(body);
    // 设置响应头部信息及编码
    res.writeHead(200, {'Content-Type': 'text/html; charset=utf8'});
 
    if(body.name && body.url) { // 输出提交的数据
        res.write("网站名：" + body.name);
        res.write("<br>");
        res.write("网站 URL：" + body.url);
    } else {  // 输出表单
        res.write(postHTML);
    }
    res.end();
  });
}).listen(300);
~~~
http://localhost:300/
