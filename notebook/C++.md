# c++

## onlone IDE website：
1.tutorialspoint IDE:
https://www.tutorialspoint.com/online_cpp_compiler.php

2.onlinegdb IDE:
https://www.onlinegdb.com/online_c++_compiler

## C++自學程式筆記

第一章 使用軟體：Dev-C++、Code::Blocks、Eclipse

Hello!我的第一支C++程式
~~~
#include <iostream>
 using namespace std;
  int main()
 {
    cout<<"Hello World”;
    return 0;
 }
~~~
第二章 基本資料處理
2-1 數
* 常數（constant），

* 變數（int a）;

2-2 資料型態簡介：
* 整數：int

* 浮點數：float,double

* 字串：char

* 布林：bool

2-3 運算式與運算子

2-4 認識型態轉換

>note：sizeof(記憶體大小)

第三章 流程控制結構
3-1 流程控制結構簡介

3-2 選擇結構：
 ~~~
if(a>0)
{}
else if(a>1)
{}
else //(a<=0)
{}
 ~~~

 ~~~
switch(a/10) 
case1 10
{}
case2 6
{}
default //其他60分以下
{}
~~~
3-3 迴圈流程控制：
~~~
while
do-while
 ~~~
第四章 陣列與字串
4-1 陣列簡介
 ~~~
int name[3];//宣告三個陣列
name[0];
name[1];
name[2];
 ~~~
4-2 字串
 ~~~
string name[2];//宣告兩個字串
name[0];
name[1];
 ~~~
4-3本章綜合範例－氣泡排序法

第五章 函數
~~~
#include <iostream>
 using namespace std;
 
int speed(int a);// 函数宣告
 
int main ()
{
    int a = 100;//實參數
    int new_speed;
    new_speed = speed(a); // 
  
    cout << "new_speed is : " << new_speed << endl;
 
    return 0;
}
 
int speed(int a) //函數定義
{
    a+=10;//形式參數
    return a; 
}
~~~

~~~
#include <iostream>
using namespace std;

int abc(int a,int b);// Function declaration

int main ()
{
    int a,b;
    int ab;

    cout << "input a and b: " << endl;
    cin>> a >> b ;
    
    ab = abc(a,b); //
    
    cout << "abc is : " << ab << endl;
    
    return 0;
}

int abc(int a,int b) //Function definition
{
    int c;
    c=a+b;//a=a+b and
    return c;
}
~~~
 5-1 函數簡介：
~~~
void SayHello(string name1,string name2) //void為無回傳值，可更改資料型態(2.2)
~~~
 5-2 參數傳遞方式

 5-3 陣列參數的傳遞

 5-4 遞迴函數：
 
factorial；
~~~
#include<iostream>                   //input&output function
using namespace std;                 //name space

int factorial(int);                  //宣告函數

int main()                           //主程式開頭
{
    int x,y;                         //x,y變數宣告

    cout<<"factorial number:";       //顯示
    cin>>x;                          //輸入

    for(y=1;y<x;y++)                 //可列印前項階層之數值，使用for
    {
        cout<<y<<" factorial "<<factorial(y)<<endl;
    }
        cout<<x<<" factorial result "<<factorial(x)<<endl;   //顯示此函數之值

    return 0;
}

int factorial(int x)       //函數定義
{
    if(x==1)               //如果為一
    {
        return x;          //回傳x之值
    }
    else                   //不為則以下進行運算
    {
        return x*factorial(x-1);
    }
}
~~~

注意：
14列的變數需與上面factorial相同。

Q&A:如何使用陣列表示？



 5-5 河內塔遊戲

第六章 認識結構型態

6-1 結構型態的建立

~~~
struct 結構名稱
{
  int a;
  string name;
}物件1,物件2;

int main( )
{
結構名稱 物件1
結構名稱 物件2

物件1.a;
物件1.name;

*****
#include <iostream>
#include <cstring>
using namespace std;

struct person
{
   char  name[50];
   char  phone[50];
   char  work[100];
   int   ID;
}Jan,Bush;

int main( )
{
    person Jan;
    person Bush;

    strcpy( Jan.name, "Jan");
    strcpy( Jan.phone, "1234");
    strcpy(Jan.work,"php");
    Jan.ID=1551;

    strcpy( Bush.name, "Bush");
    strcpy( Bush.phone, "4321");
    strcpy(Bush.work,"html");
    Bush.ID=1555;

    cout << "name : " << Jan.name <<endl;
    cout << "phone: " << Jan.phone <<endl;
    cout << "work : " << Jan.work <<endl;
    cout << "ID :   " << Jan.ID <<endl<<endl;

    cout << "name : " << Bush.name <<endl;
    cout << "phone: " << Bush.phone <<endl;
    cout << "work : " << Bush.work <<endl;
    cout << "ID :   " << Bush.ID <<endl;
    return 0;
}
~~~

6-2 函數與結構

第七章 認識物件導向程式設計

7-1 物件與類別
~~~
class 類別種類
{
  public string name
  private int ID
}
******************
#include <iostream>
using namespace std;

class Box
{
   public:
      double length;   // 长度
      double breadth;  // 宽度
};

int main( )
{
   Box Box1;        // 声明 Box1，类型为 Box
   Box Box2;        // 声明 Box2，类型为 Box
   double area = 0.0;     // 用于存储体积
 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;          // box 1 详述

   Box2.length = 12.0;
   Box2.breadth = 13.0;         // box 2 详述

   area = Box1.length * Box1.breadth;
   cout << "Box1 的面積：" << area <<endl;   // box 1 的体积

   area = Box2.length * Box2.breadth;
   cout << "Box2 的面積：" << area <<endl;   // box 2 的体积
   return 0;
}
~~~
7-2 建構子與解構子
