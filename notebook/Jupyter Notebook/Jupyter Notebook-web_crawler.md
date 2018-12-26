

<a href="https://morvanzhou.github.io/tutorials/data-manipulation/scraping/2-02-beautifulsoup-css/"">#2.2 BeautifulSoup 解析网页: CSS (爬虫 scraping 基础教学/教程 Tutorial)</a>

<a href="https://github.com/MorvanZhou/easy-scraping-tutorial/blob/master/notebook/2-2-beautifulsoup-css.ipynb">easy-scraping-tutorial/notebook/2-2-beautifulsoup-css.ipynb</a>

爬取全部原始碼
~~~
from bs4 import BeautifulSoup
from urllib.request import urlopen

# if has Chinese, apply decode()
html = urlopen("https://morvanzhou.github.io/static/scraping/list.html").read().decode('utf-8')
print(html)
~~~

爬取所需資料(div,li:)
~~~
soup = BeautifulSoup(html, features='lxml')

# use class to narrow search
month = soup.find_all('li', {"class": "month"})
for m in month:
    print(m.get_text())
~~~
************************************************
人力銀行資料
~~~
from bs4 import BeautifulSoup
from urllib.request import urlopen

# if has Chinese, apply decode()
html = urlopen("file:///E:/brother/1My104.html").read().decode('utf-8')
print(html)
~~~
全部表格資料
~~~
soup = BeautifulSoup(html, features='lxml')
# use class to narrow search
month = soup.find_all('div', {"class": "content"})
for m in month:
    print(m.get_text())
~~~
部分資料
~~~
soup = BeautifulSoup(html, features='lxml')
# use class to narrow search
month = soup.find_all('div', {"class": "jobname_5"})
for m in month:
    print(m.get_text())
~~~
所需資料
~~~
soup = BeautifulSoup(html, features='lxml')
# use class to narrow search
month = soup.find_all('div', {"class": "compname_5"})
for m in month:
    print(m.get_text())
~~~
