使用Python的Selenium控制瀏覽器
http://tn00343140a.pixnet.net/blog/post/3465687-%E4%BD%BF%E7%94%A8python%E7%9A%84selenium%E6%8E%A7%E5%88%B6%E7%80%8F%E8%A6%BD%E5%99%A8

下載完畢之後進行解壓縮，會有chromedriver.exe的執行檔，

C:\selenium_driver_chrome\chromedriver.exe
~~~
#導入模組
from selenium import webdriver
#輸入下列代碼
driver = webdriver.Chrome(r"C:\selenium_driver_chrome\chromedriver.exe")
#控制瀏覽器輸入網址列
driver.get("https://www.google.com.tw/")
#
driver.find_element_by_xpath("//input[@id='lst-ib']").send_keys("天氣")
#瀏覽器執行Google搜尋
driver.find_element_by_xpath("//input[@jsaction='sf.chk']").submit()
~~~
[Python] 使用Selenium在Google Chrome瀏覽器
http://jialin128.pixnet.net/blog/post/114056630-%5Bpython%5D--%E4%BD%BF%E7%94%A8selenium%E5%9C%A8google-chrome%E7%80%8F%E8%A6%BD%E5%99%A8
~~~
# Python3.5
# OS: Windows7
# IDE: PyCharm

from selenium import webdriver
import time

chrome_path = "C:\selenium_driver_chrome\chromedriver.exe" #chromedriver.exe執行檔所存在的路徑
web = webdriver.Chrome(chrome_path)

web.get('http://www.cwb.gov.tw/V7/')
web.set_window_position(0,0) #瀏覽器位置
web.set_window_size(700,700) #瀏覽器大小
time.sleep(5) #請程式等待5秒再繼續進行

web.find_element_by_link_text('天氣預報').click() #點擊頁面上"天氣預報"的連結
time.sleep(5)

web.close()
~~~
Python 使用 Selenium 控制瀏覽器進行自動化測試
https://myapollo.com.tw/2016/12/10/python-beginning-of-selenium/
~~~
安裝 Python Selenium 套件：
pip install selenium

以下是用 docker 下載 Chrome Selenium Server 的指令：

docker run -d -p 127.0.0.1:4444:4444 -v /dev/shm:/dev/shm selenium/standalone-chrome:3.0.1-aluminum

上述指令代表將 container 的 4444 port 給 host 使用，所以我們要連 127.0.0.1:4444 才會連到 Selenium Server 。

撰寫 Python 程式
最簡單的啟動 Chrome 範例程式碼

# run_selenium.py
import time
from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
driver = webdriver.Remote(
   command_executor='http://127.0.0.1:4444/wd/hub',
   desired_capabilities=DesiredCapabilities.CHROME
)
search_input = driver.find_element_by_name('q') # 取得搜尋框
search_input.send_keys('Python') # 在搜尋框內輸入 'Python'
search_input.submit() # 令 chrome driver 按下 submit
time.sleep(5)
driver.quit() # 關閉 chromedriver

$ python3 run_selenium.py
以上，就是一個簡單的使用範例。
~~~
[Python] Crawler in Python 使用Python網路爬蟲 -- 貼圖網站
http://jialin128.pixnet.net/blog/post/110216039-%5bpython%5d--crawler-in-python-%E4%BD%BF%E7%94%A8python%E7%B6%B2%E8%B7%AF%E7%88%AC%E8%9F%B2----%E8%B2%BC

使用Python對貼圖網站進行爬蟲，

使用 BeautifulSoup、requests與os套件，

把特定系列的貼圖url彙整成一檔案。

產生一個名為first_sticker_url.txt的檔案，如下：
~~~
# Python3.5
# OS: Windows7
# IDE: PyCharm

from bs4 import BeautifulSoup
import requests
import os

url = '輸入想要擷取某系列貼圖之網址' #把想要擷取的網址存進url變數中
html = requests.get(url).text
soup = BeautifulSoup(html, 'html.parser')

sticker_name = soup.find('h3', 'mdCMN08Ttl').text #取得此系列貼圖之名稱
print(sticker_name)

stickers = []
for tag in soup.find_all('span', 'mdCMN09Image'):
    style = tag['style']
    left = style.rfind('(')+1
    right = style.rfind(')')
    url_range = style[left:right]
    print(url_range)
    stickers.append(url_range) #把每個url存進stickers串列中

with open('first_sticker_url.txt','w',encoding='UTF-8') as fp:
    fp.write("["+sticker_name+"]"+" 系列貼圖之URL（共有"+str(len(stickers))+"張）"+'\n')
    for i in stickers:
        fp.write(i+'\n')

path = os.getcwd() #取得當前工作目錄
print("檔案寫入完成! 位於"+path)
~~~
Python+Selenium配合ChromeDriver 自動化登入&截圖
https://ovvo.cc/programming/Python-Selenium-ChromeDriver-Screenshot/
~~~
from selenium import webdriver

Browser = webdriver.Chrome()
WebUrl  = ('https://www.ithome.com.tw/')
Browser.get(WebUrl)
Browser.save_screenshot('test.png')
Browser.quit()



from selenium import webdriver
from selenium.webdriver.common.keys import Keys

Browser = webdriver.Chrome()
LoginUrl= ('https://member.ithome.com.tw/login')
UserName= ('#####')
UserPass= ('#####')

Browser.get(LoginUrl)
Browser.find_element_by_id('account').send_keys(UserName)
Browser.find_element_by_id('password').send_keys(UserPass)
Browser.find_element_by_id('password').send_keys(Keys.ENTER)
Browser.save_screenshot('test.png')
Browser.quit()
~~~
python 爬虫 使用selenium 控制浏览器 进行搜索操作
https://blog.csdn.net/weixin_42350212/article/details/80531932
~~~
# -*- coding:utf-8 -*-
from selenium import webdriver  
import os
#引入chromedriver.exe
chromedriver="C:/Program Files (x86)/Google/Chrome/Application/chromedriver.exe"
os.environ["webdriver.chrome.driver"] = chromedriver
browser = webdriver.Chrome(chromedriver)
#设置浏览器需要打开的url
url = "https://www.baidu.com/"  
browser.get(url)
#在百度搜索框中输入关键字"python"
browser.find_element_by_id("kw").send_keys("python")
#单击搜索按钮
browser.find_element_by_id("su").click()
#关闭浏览器
#browser.quit()

#################修改後code

# -*- coding:utf-8 -*-
from selenium import webdriver  
import os
#引入chromedriver.exe
chrome_path = "C:\selenium_driver_chrome\chromedriver.exe" #chromedriver.exe執行檔所存在的路徑
os.environ["webdriver.chrome.driver"] = chromedriver
browser = webdriver.Chrome(chrome_path)
#设置浏览器需要打开的url
url = "https://www.baidu.com/"  
browser.get(url)
#在百度搜索框中输入关键字"python"
browser.find_element_by_id("kw").send_keys("python")
#单击搜索按钮
browser.find_element_by_id("su").click()
#关闭浏览器
#browser.quit()
~~~
登入自己的網頁爬蟲
~~~
# -*- coding:utf-8 -*-
from selenium import webdriver  
import os
#引入chromedriver.exe

chrome_path = "C:\selenium_driver_chrome\chromedriver.exe" #chromedriver.exe執行檔所存在的路徑
os.environ["webdriver.chrome.driver"] = chromedriver
browser = webdriver.Chrome(chrome_path)

url = "https://iachievedream.000webhostapp.com/"  
browser.get(url)
#輸入帳號密碼
browser.find_element_by_id("id-userName").send_keys("user")
browser.find_element_by_id("id-password").send_keys("juststrive")

#登入頁面
browser.find_element_by_id("id-submit").click()

#关闭浏览器
#browser.quit()
~~~
