
<a href="http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript/">用 Node.js 學 JavaScript 語言（1）簡介與安裝</a>

http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript/
用 Node.js 學 JavaScript 語言（1）簡介與安裝


檔案： hello.js

<code>
console.log("hello!");
</code>


*Opern this terminal.

command：

”sd“ to this folder.

”ls“ to check file.

command：”node hello.js “

這個指令執行該程式，於是畫面中會出現該程式的執行結果，印出 `hello!` 訊息！
**
變數與指定
string:
a="abc"
b="def"
a+b
>>>"abcdef"


command:node
> pi
ReferenceError: pi is not defined
> pi=3.1412
3.1412
> pi
3.1412
> 4*pi
12.5648
> 

typeof(pi)

*************
<a herf="http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript-2-control-flow/">用 Node.js 學 JavaScript 語言（2）基本控制</a>

http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript-2-control-flow/
用 Node.js 學 JavaScript 語言（2）基本控制


檔案：score.js

var score = 61;
 
if (score >= 60)
  console.log("及格");
else
  console.log("不及格");



*************
<a href="http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript-3-function-parameter-closure/">用 Node.js 學 JavaScript 語言（3）函數、參數與閉包</a>

http://www.codedata.com.tw/javascript/using-nodejs-to-learn-javascript-3-function-parameter-closure/
用 Node.js 學 JavaScript 語言（3）函數、參數與閉包

function,closure

函數的宣告

檔案：function.js

// 第一種寫法，直接宣告函數
function sub(a,b) {         
  return a-b;
}
 
// 第二種寫法，將匿名函數指定給變數。
var add = function(a,b) {     
  return a+b;
}
console.log("add(3,5)=", add(3,5), " sub(7,2)=", sub(7,2));


執行結果：
D:\js\code>node function.js
add(3,5)= 8  sub(7,2)= 5


「函數當作參數」


檔案： fptr.js

function sub(a,b) {         
  return a-b;
}
 
function f5(f, a) {
  return f(a, 5);
}

command:node
console.log("sub(8,5)="+sub(8, 5));
console.log("f5(sub,8)="+f5(sub,8));
執行結果

D:\Dropbox\Public\web\js\code>node fptr
sub(8,5)=3
f5(sub,8)=3

您可以看到，函數 `f5(f, a)` 的參數 f，其實又是一個函數，因為我們在 f(a,5) 當中把 f 當作函數來呼叫。

所以、當我們呼叫 f5(sub, 8) 的時候，該函數會傳回 3，因為當我們將 f5(sub, 8) 的內容 return f(a, 5) 裏面的 f 取代為 sub，
而 a 取代為 8 時，就會發現 return 語句的 f(a,5) 其實就是呼叫 sub(8,5)，所以當然就會傳回 3 囉！
