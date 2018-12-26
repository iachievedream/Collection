使用jquery進行按鈕跳躍：
~~~
<!DOCTYPE html>
<html>
<head>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
<script>
$(document).ready(function(){
    $("button").click(function(){
        $("#p1").css("color", "red").slideUp(2000).slideDown(2000);
    });
});
</script>
</head>
<body>

<p id="p1">jQuery is fun!!</p>

<button>Click me</button>

</body>
</html>
~~~

***

如何利用 JavaScript 在 HTML5 的 Canvas 標籤中繪圖 - 基礎教學

~~~
<!-- 建立一個 canvas 標籤，id 為 canvas_1，大小為 480 * 320 -->
<canvas id="canvas_1" width="480" height="320">
    <!-- 倘若使用者的瀏覽器並不支援 canvas，將會顯示該段內容。 -->
    您的瀏覽器必須支援 HTML5 標籤語法，才能遊玩該遊戲。
</canvas>
<br />
<button>開始遊戲</button>
~~~

https://mdbookspace.com/view/jsa/canvas.md

***

網頁手繪板
本程式簡化自以下文章中的範例，該範例可選顏色與粗細，但為了讓初學整更容易懂，筆者將顏色固定為黑色，粗細固定為 3，並去除了相關的程式碼。

[黑暗執行緒 -- 用100行實現HTML5可存檔塗鴉版]
檔案： painter.html
~~~
<!DOCTYPE html>
<html>
<head>
    <title>範例 -- 手寫板</title>
    <script src="http://ajax.aspnetcdn.com/ajax/jQuery/jquery-1.6.4.js">
    </script>
    <script>
        var p_color = "black";
        var p_width = 3;
        $(function () {
            //取得canvas context
            var $canvas = $("#cSketchPad");
            var ctx = $canvas[0].getContext("2d");
            ctx.lineCap = "round";
            ctx.fillStyle = "white"; //整個canvas塗上白色背景避免PNG的透明底色效果
            ctx.fillRect(0, 0, $canvas.width(), $canvas.height());
            var drawMode = false;
            //canvas點選、移動、放開按鍵事件時進行繪圖動作
            $canvas.mousedown(function (e) {
                ctx.beginPath();
                ctx.strokeStyle = p_color;
                ctx.lineWidth = p_width;
                ctx.moveTo(e.pageX - $canvas.position().left, e.pageY - $canvas.position().top);
                drawMode = true;
            })
            .mousemove(function (e) {
                if (drawMode) {
                    ctx.lineTo(e.pageX - $canvas.position().left, e.pageY - $canvas.position().top);
                    ctx.stroke();
                }
            })
            .mouseup(function (e) {
                drawMode = false;
            });
        });
    </script>
</head>
<body>
 <div id="dCanvas">
  <canvas id="cSketchPad" width="300" height="300" style="border: 2px solid gray" />
 </div>
</body>
</html>
~~~
***
http://blog.darkthread.net/post-2011-10-30-html5-canvas-sktechpad.aspx

~~~
<!DOCTYPE html>
 <html>
<head>
    <title>HTML5 Canvas塗鴉板</title>
    <script src="http://ajax.aspnetcdn.com/ajax/jQuery/jquery-1.6.4.js">
    </script>
    <style>
        body,input { font-size: 9pt; }
        #dCanvas,#dLine { clear: both; }
        .option
        {
            float: left; width: 20px; height: 20px; border: 2px solid #cccccc;
            margin-right: 4px; margin-bottom: 4px;
        }
        .active { border: 2px solid black; }
        .lw { text-align: center; vertical-align: middle; }
        img.output { border: 1px solid green; }
        #cSketchPad { cursor: arrow; }
    </style>
    <script>
        $(function () {
            //產生不同顏色的div方格當作調色盤選項
            var colors =
            "red;orange;yellow;green;blue;indigo;purple;black;white".split(';');
            var sb = [];
            $.each(colors, function (i, v) {
                sb.push("<div class='option' style='background-color:" + v + "'></div>");
            });
            $("#dPallete").html(sb.join("\n"));
            //產生不同尺寸的方格當作線條粗細選項
            sb = [];
            for (var i = 1; i <= 9; i++)
                sb.push("<div class='option lw'>" +
         "<div style='margin-top:#px;margin-left:#px;width:%px;height:%px'></div></div>"
                .replace(/%/g, i).replace(/#/g, 10 - i / 2));
            $("#dLine").html(sb.join('\n'));
            var $clrs = $("#dPallete .option");
            var $lws = $("#dLine .option");
            //點選調色盤時切換焦點並取得顏色存入p_color，
            //同時變更線條粗細選項的方格的顏色
            $clrs.click(function () {
                $clrs.removeClass("active");
                $(this).addClass("active");
                p_color = this.style.backgroundColor;
                $lws.children("div").css("background-color", p_color);
            }).first().click();
            //點選線條粗細選項時切換焦點並取得寬度存入p_width
            $lws.click(function () {
                $lws.removeClass("active");
                $(this).addClass("active");
                p_width =
                    $(this).children("div").css("width").replace("px", "");
 
            }).eq(3).click();
            //取得canvas context
            var $canvas = $("#cSketchPad");
            var ctx = $canvas[0].getContext("2d");
            ctx.lineCap = "round";
            ctx.fillStyle = "white"; //整個canvas塗上白色背景避免PNG的透明底色效果
            ctx.fillRect(0, 0, $canvas.width(), $canvas.height());
            var drawMode = false;
            //canvas點選、移動、放開按鍵事件時進行繪圖動作
            $canvas.mousedown(function (e) {
                ctx.beginPath();
                ctx.strokeStyle = p_color;
                ctx.lineWidth = p_width;
                ctx.moveTo(e.pageX - $canvas.position().left, e.pageY - $canvas.position().top);
                drawMode = true;
            })
            .mousemove(function (e) {
                if (drawMode) {
                    ctx.lineTo(e.pageX - $canvas.position().left, e.pageY - $canvas.position().top);
                    ctx.stroke();
                }
            })
            .mouseup(function (e) {
                drawMode = false;
            });
            //利用.toDataqURL()將繪圖結果轉成圖檔
            $("#bGenImage").click(function () {
                $("#dOutput").html(
                $("<img />", { src: $canvas[0].toDataURL(),
                    "class": "output"
                }));
            });
        });
    </script>
</head>
<body>
<div id="dPallete"></div>
<div id="dLine"></div>
<div id="dCanvas">
<canvas id="cSketchPad" width="300" height="300" style="border: 2px solid gray" />
</div>
<input type="button" id="bGenImage" value="Generate Image" />
<div id="dOutput"></div>
</body>
</html>
~~~

***

淺談Canvas - save/restore

http://blog.ring.idv.tw/comment.ser?i=386

Javascript-30-Practice/08 - Fun with HTML5 Canvas/index-START.html

https://github.com/godlike0108/Javascript-30-Practice/blob/master/08%20-%20Fun%20with%20HTML5%20Canvas/index-START.html

