利用 pip freeze 可以確認當前安裝了那些套件，如果想要更新套件，就輸入

pip install --update 套件名稱
下列指令可以列出目前已安裝的所有套件：
pip freeze

建議安裝 Anaconda，如有安裝 Anaconda 只需安裝以下套件
$ pip install selenium tldextract Pillow

~~~
在終端中輸入：
pip install pyinstaller

easy_install pip
pip install BeautifulSoup4

install pip:
python -m pip install --upgrade pip
pip install requests
pip install fake_useragent
pip install selenium

import urllib2
from bs4 import BeautifulSoup
<<urllib2 在 python3.x 中被改为urllib.request>>
********************************
使用Python爬蟲所需要以下的lib 安裝
pip install beautifulsoup4
pip install lxml
pip install requests:額外安裝，Python 資料處理所需套件
pip install Pandas:Pandas 資料處理好幫手Pandas，Pandas可以用來更方便處理資料
~~~
第一支爬蟲程式
~~~
# import 套件
import requests
from bs4 import BeautifulSoup
# 用 requests 抓取網頁並存在 response
response =requests.get("https://jimmy15923.github.io/example_page")
# 用 BS4 解析 HTML 並把結果回傳 soup
soup = BeautifulSoup(response.text,"lxml")
# 印出 h1 標籤
print(soup.find("h1"))

#目標網頁的 HTML 文字
response.text
#HTTP 狀態碼
response.status_code
#判斷編碼
response.encoding

BeautifulSoup
# 請輸入以下的 codes 並 print 出結果
print(soup.find("h1")
print(soup.h1)
print(soup.html.h1)
print(soup.body.h1)
print(soup.html.body.h1)

soup.find("tag")=soup.tag
soup.find("tag",{"attr":"value"})=soup.find("tag",attr="value")

#找尋全部
find_all()

#列印標籤全部內容
print(soup.find("h1"))
#列印標籤內容
print(soup.find("h1").text)

# 找出第一個 td 的標籤
print(soup.find("td"))
# 找出第一個 td 的標籤並印出其文字內容
print(soup.find("td").text)
# 找出所有 td 的標籤
print(soup.find_all("td"))

# 不指定標籤，但找出所有屬性 class = "zzz" 的標籤
print(soup.find_all("", {"class":"zzz"}))

# 找出所有 td 標籤的第三個並找出其中的 a 標籤
print(soup.find_all("td")[2].find("a"))

# 非常實用的 for loop 寫法，當你使用 find_all 後，
想一口氣把 list 裡面所有 tags 的內容文字取出時，
可以這樣寫
[tag.text for tag in soup.find_all("tag")]
~~~



Python MySQL - mysql-connector 驱动
http://www.runoob.com/python3/python-mysql-connector.html

pip3 install PyMySQL

我们可以使用 pip 命令来安装 mysql-connector：
python -m pip install mysql-connector

#Add database python
~~~
import mysql.connector
mydb = mysql.connector.connect(
  host="localhost",       # 数据库主机地址
  user="root",    # 数据库用户名
  passwd="a1234567"   # 数据库密码
)
print(mydb)

mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE python") #Add database python

mycursor.execute("SHOW DATABASES") #see database
for x in mycursor:
  print(x)
~~~
#Add table web
~~~
import mysql.connector
mydb = mysql.connector.connect(
  host="localhost",       # 数据库主机地址
  user="root",    # 数据库用户名
  passwd="a1234567",   # 数据库密码
  database="python"
)
print(mydb)

mycursor = mydb.cursor()

mycursor.execute("CREATE TABLE web (name VARCHAR(255), url VARCHAR(255))") #Add table web
#mycursor.execute("ALTER TABLE web ADD COLUMN id INT AUTO_INCREMENT PRIMARY KEY")

#>>mycursor.execute("CREATE TABLE web (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255), url VARCHAR(255))")

mycursor.execute("SHOW TABLES")
for x in mycursor:
  print(x)
~~~
#INSERT INTO
~~~
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  passwd="a1234567",
  database="python"
)
mycursor = mydb.cursor()

sql = "INSERT INTO web (name, url) VALUES (%s, %s)"
val = ("RUNOOB", "https://www.runoob.com")
mycursor.execute(sql, val)

mydb.commit()    # 数据表内容有更新，必须使用到该语句

print(mycursor.rowcount, "记录插入成功。")
~~~
#INSERT INTO executemany
~~~
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  passwd="a1234567",
  database="python"
)
mycursor = mydb.cursor()

sql = "INSERT INTO web (name, url) VALUES (%s, %s)"
val = [
  ('Google', 'https://www.google.com'),
  ('Github', 'https://www.github.com'),
  ('Taobao', 'https://www.taobao.com'),
  ('stackoverflow', 'https://www.stackoverflow.com/')
]
mycursor.executemany(sql, val)
mydb.commit()    # 数据表内容有更新，必须使用到该语句
print(mycursor.rowcount, "记录插入成功。")
~~~
