install dependencies and run
open cmder：
~~~
npm install request cheerio
~~~
全部原始碼code：
~~~
const request = require('request')
const url = 'http://www.cwb.gov.tw/V7/forecast/taiwan/Taipei_City.htm'
request(url, (err, res, body) => {
  console.log(body)
})
~~~

***

<a href="https://tutorials.webduino.io/zh-tw/docs/socket/useful/exchange-nodejs.html">日幣匯率 ( Node-js 爬蟲 )</a>


<a href="https://andy6804tw.github.io/2018/02/11/nodejs-crawler/">[Node.js 爬蟲] 用 request + cheerio 抓取地震資訊</a>

~~~
const request = require("request");
const cheerio = require("cheerio");
const fs = require("fs");           //fs 是 NodeJS 的讀檔模組，包含讀取、刪除、寫入等動作。

const earthquake = function () {
  request({
    url: "http://www.cwb.gov.tw/V7/modules/MOD_EC_Home.htm", // 中央氣象局網頁，第一個參數為網址(url)
    method: "GET"//第二個參數為請求方法(method)這邊使用 GET 請求方式
  }, function (error, response, body) {//後面接著一個 callback 函式他會回傳一個 body 內容為 HTML 格式。
    if (error || !body) {
      return;
    }
    const $ = cheerio.load(body); // 載入 body
    const result = []; // 建立一個儲存結果的容器
    const table_tr = $(".BoxTable tr"); // 爬最外層的 Table(class=BoxTable) 中的 tr
    
    for (let i = 1; i < table_tr.length; i++) { // 走訪 tr
      const table_td = table_tr.eq(i).find('td'); // 擷取每個欄位(td)，.find('td')陣列走訪方式讀取每一列資訊
      const time = table_td.eq(1).text(); // time (台灣時間)
      const latitude = table_td.eq(2).text(); // latitude (緯度)
      const longitude = table_td.eq(3).text(); // longitude (經度)
      const amgnitude = table_td.eq(4).text(); // magnitude (規模)
      const depth = table_td.eq(5).text(); // depth (深度)
      const location = table_td.eq(6).text(); // location (位置)
      const url = table_td.eq(7).text(); // url (網址)
      // 建立物件並(push)存入結果
      result.push(Object.assign({ time, latitude, longitude, amgnitude, depth, location, url }));
      //Object.assign() 產生一筆物件把所有結果塞進去並推入 result 陣列中。
    }
    // 在終端機(console)列出結果
    console.log(result);
    // 寫入 result.json 檔案
    fs.writeFileSync("result.json", JSON.stringify(result));//fs.writeFileSync()把陣列(result)寫入 result.json 檔案中
  });
};

earthquake();
// 每半小時爬一次資料
setInterval(earthquake, 30 * 60 * 1000);
~~~


***
<a href="https://larrylu.blog/nodejs-request-cheerio-weather-414e33f45c7d">[Node.js] 用 request + cheerio 抓取即時天氣</a>

cheerio-weather
Blog Post: 用 cheerio 抓取即時天氣
How to run this
clone and go into this repository
~~~
git clone https://github.com/Larry850806/cheerio-weather
cd cheerio-weather
~~~
install dependencies and run
~~~
npm install
node index.js
~~~
result
~~~
[ 
  { time: '今晚至明晨', temp: '20 ~ 21', rain: '30 %' },
  { time: '明日白天', temp: '20 ~ 26', rain: '30 %' },
  { time: '明日晚上', temp: '21 ~ 23', rain: '30 %' }
]
~~~

總結

先找到要抓哪個網站的資料

用 Chrome Developer Tool 觀察 HTML 結構

寫 code 用 request 向網站要資料

把要來的資料用 cheerio 取出我們要的部份

把資料整理完之後輸出
***
把 request 這個 library require 進來之後，

就可以用它來發 HTTP request 拿到網頁的 body，

參考下面的 code，拿到的 body 是一個字串，就是整個網頁的 HTML

~~~
const request = require('request')
const url = 'http://www.cwb.gov.tw/V7/forecast/taiwan/Taipei_City.htm'
request(url, (err, res, body) => {
  console.log(body)
})
~~~
用 cheerio 擷取我們要的部份
拿到 body 之後接著要擷取出我們要的天氣部份，cheerio 可以用 css selector 的語法來選擇元素
~~~
const cheerio = require('cheerio')
// 把 body 放進 cheerio 準備分析
const $ = cheerio.load(body)
let weathers = []
$('#box8 .FcstBoxTable01 tbody tr').each(function(i, elem) {
  weathers.push($(this).text().split('\n'))
})
console.log(weathers)
~~~
***
~~~
先找到 <div id="box8">，接著是 <table class="FcstBoxTable01">，
再找標籤 <tbody>，取得裡面的每一個 <tr>，
取文字部分分行之後放進 weathers 陣列
~~~

完整code
~~~
const request = require('request')//request 可以用來取得整個頁面的 HTML
const cheerio = require('cheerio')//cheerio 則是用來從 HTML 中擷取我們要的資料
                                  //可以用 css selector 的語法來選擇元素

const url = 'http://www.cwb.gov.tw/V7/forecast/taiwan/Taipei_City.htm'

request(url, (err, res, body) => {
  const $ = cheerio.load(body)
  
  
  let weathers = []
  $('#box8 .FcstBoxTable01 tbody tr').each(function(i, elem) {
    weathers.push(
      $(this)
        .text()
        .split('\n')
    )
  })

  weathers = weathers.map(weather => ({
    time: weather[1].substring(2).split(' ')[0],
    temp: weather[2].substring(2),
    rain: weather[6].substring(2),
  }))

  console.log(weathers)
})
~~~
