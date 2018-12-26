dockernote
===

docker基本指令
---

docker與CS50自學過程
<div>
<h4>docker：</h4>
win10可直接裝docker軟體，
win8以下則需<strong>Docker Toolbox的輔助才能啟動，兩者都須先啟動作業系統的虛擬功能。</strong>
<h4>docker指令：</h4>
<ol>
	<li style="list-style-type:none;">
<ol>
	<li>檢查docker版本：docker version</li>
	<li>docker系統資訊畫面：docker info</li>
	<li>搜尋映像檔（Images）：docker search php（php為範例）</li>
	<li>下載映像檔：docker pull『』</li>
	<li>列出所有的映像檔：docker images</li>
	<li>exit：離開</li>
</ol>
</li>
</ol>
</div>

<hr />

<h4>CS50</h4>
windows與mac的作業系統的docker軟體視窗或終端機上打上這串指令下載ide50編譯器：

docker run --privileged -e "OFFLINE_IP=127.0.0.1" -e "OFFLINE_PORT=8080" --name ide50 -d -p 5050:5050 -p 8080-8082:8080-8082 cs50/ide50-offline

瀏覽器打開這個網址位置： <a href="http://localhost:5050/">http://localhost:5050/</a>

<hr />

<h4>Managing the IDE</h4>
<ul>
	<li>啟動ide50編譯器：docker start ide50</li>
	<li>重啟ide50編譯器：docker restart ide50</li>
	<li>暫停ide50編譯器：docker stop ide50</li>
	<li>移除cs50編譯器：removing:docker rm ide50</li>
</ul>
<div>官方教學資訊：</div>
<a href="https://manual.cs50.net/ide/offline">https://manual.cs50.net/ide/offline</a>

<hr />

<h4>WordPress安裝</h4>
<pre><code>docker run --name some-wordpress --link some-mysql:mysql -d wordpress</code></pre>
<pre><code>$ sudo docker run --name some-wordpress --link some-mysql:mysql -d wordpress</code></pre>
 
