投擲履歷
~~~
create database MyData;  //建立一個資料庫

use mydata;

create table Delivery_resume(
ID int(6) auto_increment primary key,
position varchar(30),
companyint varchar(10),
Reply varchar(10),
content varchar(50)
);


INSERT INTO Delivery_resume(position,companyint) values
('	軟體工程師	','	網際之星資訊股份有限公司	'),
('	軟體工程師	','	高誠網路服務股份有限公司	'),
('	C/C++ Programmer(高雄)	','	台眾電腦股份有限公司	'),
('	JAVA程式設計師(高雄)	','	康大資訊股份有限公司	'),
('	[第三事業處] Java 開發工程師 (工作地點:高雄)	','	昊聲訊息技術有限公司	'),
('	軟體工程師 (Java)	','	意藍資訊股份有限公司	'),
('	APP開發工程師	','	旭峻資訊有限公司	'),
('	Python Developer(高雄)	','	台灣新蛋股份有限公司	'),
('	Ogloba - Java 軟體工程師	','	金永立有限公司	'),
('	Java程式設計師(台北)	','	中鋼集團_網際優勢股份有限公司	'),
('	程式研發工程師	','	104人力銀行_一零四資訊科技股份有限公司	'),
('	高雄軟體園區 - 軟體工程師2	','	精益科技股份有限公司	'),
('	Java軟體工程師(高雄)	','	景佳科技有限公司	'),
('	高薪 年收70萬起 程式設計師 一年經驗可 ITS	','	全球人事顧問股份有限公司	'),
('	620_ C++ 工程師	','	神通資訊科技股份有限公司	'),
('	資料科學工程師	','	新視域科技股份有限公司	'),
('	AI演算法工程師(新北市)	','	智慧雲端科技股份有限公司	'),
('	軟體工程師 (Java)	','	意藍資訊股份有限公司	'),
('	軟體設計工程師	','	全曜財經資訊股份有限公司	'),
('	程式設計師	','	豐湛數位科技有限公司	'),
('	前/後端web工程師	','	歐兔歐全球股份有限公司	'),
('	PHP工程師	','	準訊科技有限公司	'),
('	軟體開發工程師	','	聯瞻資訊股份有限公司	'),
                ('	軟體工程師_A(RDSW_140)	','	正文科技股份有限公司	'),
                ('	Java程式設計師(專案-非駐點)	','	前進國際股份有限公司	'),
                ('	軟體工程師	','	天擎積體電路股份有限公司	'),
                ('	電控工程師_(大陸.蘇州)	','	均華精密工業股份有限公司	'),
                ('	Java軟體工程師(台中)	','	碩網資訊股份有限公司	'),
                ('	培訓軟體工程師_D               	','	干城數碼有限公司	'),
                ('	Ogloba - Java 軟體工程師	','	金永立有限公司	'),
                ('	程式設計工程師-雲林	','	德鴻科技股份有限公司	'),
                ('	自動化工程師	','	新代科技股份有限公司	'),
                ('	研發助理(Assistant)	','	安富科技股份有限公司	'),
                ('	61690-自動化軟體研發工程師	','	QNAP_威聯通科技股份有限公司	'),
                ('	440-Java程式設計師(新竹縣)	','	兆赫電子股份有限公司	'),
                ('	軟體設計工程師(竹科,南科 MVC )	','	亦思科技股份有限公司	'),
                ('	JAVA 軟體工程師	','	簡單行動支付股份有限公司	'),
                ('	JAVA工程師	','	凡谷興業有限公司	'),
                ('	應用程式開發工程師_IABG(台南研發中心)	','	台達電子工業股份有限公司 _DELTA ELECTRONICS INC.	'),
                ('	培訓全端軟體工程師(實習生)	','	賜鴻科技有限公司	'),
                ('	培訓軟體工程師(PHP)	','	緯德科技股份有限公司 (TechLink Corporation)	'),
                ('	初階 Java 工程師 (內湖, 高薪, 需輪班)	','	創樂科技有限公司	'),
                ('	程式設計工程師	','	皮托科技股份有限公司	'),
                ('	軟體工程師 (歡迎職場新鮮人)	','	精秝科科技股份有限公司	'),
                ('	軟體研發工程師	','	偉林電子股份有限公司	'),
                ('	Python開發工程師(AI及數據平台開發)	','	易勝資訊股份有限公司	'),
                ('	php工程師 ★歡迎新鮮人，相關科系畢，無經驗可★	','	英屬維京群島商傑利資訊科技股份有限公司	'),
                ('	軟體工程師 Software Engineer / Programmer(台中市政府旁)	','	新加坡商鈦坦科技股份有限公司台灣分公司	'),
                ('	軟體工程師( Software Engineer)	','	賽微科技股份有限公司	'),
                ('	java 程式設計師 (高雄)	','	商智資訊股份有限公司	'),
                ('	PHP程式設計師[台中]	','	葳橋資訊股份有限公司	'),
                ('	後端軟體工程師(Back-End Software Engineer)	','	高谷科技有限公司	'),
                ('	軟體工程師	','	華洋精機股份有限公司	'),
                ('	PHP程式設計師 / 35k~50k	','	柿子紅科技股份有限公司	'),
                ('	網頁前端 / 網頁後端 程式設計師	','	奇果力創研科技有限公司	');

查詢資料select
select * from Delivery_resume;

更新資料:表格(Delivery_resume)，資料內容(Reply)，位置(id)
UPDATE `Delivery_resume` SET `Reply` = 'OK'  WHERE `id` = '6'  ;

刪除資料表:DROP TABLE Delivery_resume ;
刪除資料表:DELETE FROM Delivery_resume [WHERE Clause];

刪除資料庫:drop database MyData;

~~~
插入資料
~~~
INSERT INTO Delivery_resume(position,companyint) values
('	12	','	有限公司	'),
('	工程師	','	股份有限公司	');

DELETE FROM Delivery_resume WHERE id > 55


DELETE FROM Delivery_resume WHERE id = 56&57
DELETE FROM Delivery_resume WHERE id = 60,61

~~~
