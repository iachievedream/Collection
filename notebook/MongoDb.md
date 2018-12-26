<a href="https://ithelp.ithome.com.tw/users/20089358/ironman/1064">[30天之你好MongoDB]</a>

mongodb install：

$ npm install mongodb

~ MongoDB的組成Document與Collection ~

Document：

{ name : "mark". age : 100 , title : 'Mark BIG BIG' }

Collection：（裡面有多個Document） Collection是動態的，這代表這一個collection裡的document可以是各種類型， 例如下面這幾種文檔都可以存放在同一個collection裡，不像關聯式規定的好好。

{ id :1, name : "mark" } { age : 100 }


* 在某個檔案夾下建立docker-compose.yml，並且內容如下，然後在執行<code>docker-compose up</code>指令，它就自動幫你建立一個裝有mongodb的環境。

docker-compose.yml
~~~
version: '2'

services:
  mongo:
    image: mongo
    ports:
      - "27017:27017"
    volumes_from:
      - mongodata
  mongodata:
    image: tianon/true
    volumes:
      - /data/db
~~~

<code>docker ps</code>:查看MongoDb是否啟動，另外複製IP位置。

<code>docker exec -ti 333fba82b57e bash</code> :333fba82b57e為IP，進入MongoDb內。

<code>mongo 資料夾名稱</code>:新增或連接資料庫名稱。


操作MongoDb
---
* 單筆資料Insert

<code>user1 = {
	name : "Mark",
	age : 18,
	bmi : 10
}
</code>

* 將這筆document新增至user的collection裡

<code>db.user.insert(user1);</code>

* 回傳值如下，代表成功新增一筆。

<code>WriteResult({"nInserted" : 1})</code>

* 查看user這collection中的資料。

<code>db.user.find()</code>

* 增加三筆資料

<code>db.user.insert({"name":"mark","age":23});</code>

<code>db.user.insert({"name":"steven","age":23});</code>

<code>db.user.insert({"name":"jj","age":23});</code>

* 刪除單一資料

<code>db.user.remove({"name":"steven"})</code>

* 刪除所有資料

<code>db.user.remove({})</code>

<code>db.user.drop()</code>
