C-language

power
~~~
#include<stdio.h>
double power(double,int);                       //定義函數power
int main(void)                                  //主程式開頭 
{
    double x;                                   //定義小數x
    int n;                                      //定義整數n
    
    printf("請輸入x和n");                        //顯示字串
    scanf("%lf,%d",&x,&n);                      //輸入數值，%lf為數值類型，&x為數值之值
    
    printf("power(%lf,%d)=%lf",x,n,power(x,n)); //顯示結果，前為顯示文字％f為小數，％d為整數，後為顯示變數值
    return 0;                                   //回傳值為零
    
}
double power(double x,int n)                    //定義power函數
{
    int i;                                      //宣告整數i
    double mul=1.0;                             //宣告小數mal
    for(i=1;i<=n;i++)                           //迴圈for
      mul=mul*x;
    return mul;
}
~~~
用math.h代替定義函數
~~~
#include<stdio.h>
#include<math.h>
int main(void)                                  //主程式開頭 
{
    double x;                                   //定義小數x
    double n;                                   //定義整數n
    
    printf("請輸入x和n\n");                      //顯示字串
    scanf("%lf,%f",&x,&n);                      //輸入數值，%lf為數值類型，&x為數值之值
    
    printf("pow(%lf,%lf)=%lf",x,n,pow(x,n));    //顯示結果，前為顯示文字％f為小數，％d為整數，後為顯示變數值
    return 0;                                   //回傳值為零
    
}
~~~
請輸入x和n                                                                                                                              
2,3                                                                                                                                     
pow(2.000000,0.000000)=1.000000                                                                                                         



Tower of Hanoi
---
~~~
#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
    int n;

    printf("請輸入河內塔的高度：");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    printf("移動 %d 層河內塔共需移動 %d 次\n", n, time);

    system("pause");
}

void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
    }
    else
    {
        hanoi(n - 1, A, C, B);
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++time, n, A, C);
        hanoi(n - 1, B, A, C);
    }
}
~~~
in other hand
~~~
#include <stdio.h>

void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("Move sheet from %c to %c\n", A, C);
    }
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}

int main() {
    int n;
    printf("請輸入盤數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
} 

~~~

input array
~~~
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mylist[5]={5,3,6,3,5,},i;
    for(i=0;i<5;i++)
        printf("%d,",mylist[i]);
    printf("Hello, World!\n");
    
    return 0;
}
~~~

//Array Input Exercise
#include <iostream>                   //include輸出入工具
using namespace std;                  //std定義位址

int main()                             //主程式開頭
{
    int i,X[4];                        //宣告數字i以及含有四個數字的陣列Ｘ
    for(i=0;i<=3;i++)                  //i為零，每次加數字一，加至數字三時停止
    {
        cout << "please input number"; //顯示字串
        cin  >> X[i];                  //輸入陣列，重複四次
    }
    for (i=0;i<=3;i++)
        cout << X[i] << "-" ;           //顯示陣列，中間多加一槓
   return 0;
}

//以變數為天數的輸入數值


#include <iostream>                   //include輸出入工具
using namespace std;                  //std定義位址

int main()                             //主程式開頭
{
    int i,j,X[i];                        //宣告數字i,j以及陣列Ｘ

    cout<<"please input day";
    cin>>i;
    i=i-1;                            //陣列第一項為零的緣故

    for(j=0;j<=i;j++)                  //i為零，每次加數字一，加至輸入數字暫停為止
    {
        cout << "please input number"; //顯示字串
        cin  >> X[j];                  //輸入陣列，重複四次
    }
    for (j=0;j<=i;j++)
    {
        cout << X[j] << "-" ;           //顯示陣列，中間多加一槓
    }
   return 0;
}

//class funtion input exercise

//cirvle perimeter :input redius, output perimeter
#include <iostream>
using namespace std;

class circle {                        //定義類別
    public:                           //公開物件
      int a;                          //定義整數半徑
      float perimeter();              //定義物件

    private:                          //私密物件
      float pi=3.14;                  //小數

};

float circle::perimeter() {           //使用float
    return 2*a*pi;                    //物件函數，使用回傳方式
}

int main(void) {
    circle c;                         //以c代替circle整個類別

    cout << "輸入半徑";                 //顯示
    cin  >>c.a;                        //輸入變數a
    cout << endl;
    cout << c.perimeter() << endl;     //呼叫circle類別，並以perimeter物件顯示結果
    cout << endl;

    return 0;
}

//class funtion input exercise money book

#include <iostream>
#include <cstdlib>
using namespace std;

class  money                //宣告money類別
{
private:                       //宣告私用資料成員
    char moneyID[8];
    float money_1,money_2,totle,average;
public:                        //公用資料成員
    void input_data()         //宣告成員函數
{
    cout << "**name**" << endl;
    cin >> moneyID;
}

    void show_data()           //宣告成員函數
{
    cout << "money of 1："; //實作input_data函數
    cin >> money_1;
    cout << "money of 2：";
    cin >> money_2;
    totle = money_1 + money_2;
    average = (money_1 + money_2)/2;
    cout << "neme-money" << moneyID <<endl;
    cout << "totle is " << totle <<"."<<endl<< "average is " << average << " dollor" << endl;
}
};

int main()
{
    money book;               //宣告money類別的物件
    book.input_data();           //呼叫input_data成員函數
    book.show_data();           //呼叫input_data成員函數

    return 0;
}

Q＆A
能輸入天數，用陣列的方式去計算任意天數的總金額而平均每天花費嗎？


//ellipse perimeter

ellipse perimeter
OK*****************************************************
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,ex,perimeter;
    const float pi=3.14159;
    cout <<"Put a,b nunber:";
    cin >>a>>b;

    ex=(3*a+b)*(a+(3*b));
    perimeter=pi*(3*(a+b)-sqrt(ex));
    cout <<"ellipse perimeter is"<<ex<<endl;
    return 0;
}
***************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,ex;
    const float pi=3.14159;
    cout <<"Put a,b nunber:";
    cin >>a>>b;
    ex=perimeter(a,b);
    cout <<"ellipse perimeter is"<<ex<<endl;
    return 0;
}

int perimeter(float a,float b)
{
    return perimeter=pi*(3*(a+b)-sqrt((3*a+b)*(a+3*b)));
}

***************************************************

#include <iostream>
#include <math.h>
using namespace std;

class circle {                        //定義類別
    public:                           //公開物件
      int a,b;                          //定義整數半徑
      float perimeter();              //定義物件

    private:                          //私密物件
      float pi=3.14;                  //小數
};

float circle::perimeter() {           //使用float
    return perimeter=pi*(3*(a+b)-sqrt((3*a+b)*(a+3*b))); //物件函數，使用回傳方式
}

int main(void) {
    circle c;                         //以c代替circle整個類別

    cout << "輸入半徑";                 //顯示
    cin  >>c.a,c.b;                        //輸入變數a
    cout << endl;
    cout << c.perimeter() << endl;     //呼叫circle類別，並以perimeter物件顯示結果
    cout << endl;

    return 0;
}

//factorial

#include<iostream>                   //input&output function
using namespace std;                 //name space

int factorial(int);                  //函數定義
int main()//主程式開頭
{
    int x,y;                           //x變數宣告

    cout<<"請輸入階層數之值:";          //顯示
    cin>>x;                          //輸入

    for(y=1;y<x;y++)                //可列印前九階層之數值，使用for
    {
        cout<<y<<"階層為"<<factorial(y)<<endl;
    }
        cout<<x<<"階層運算的結果值為"<<factorial(x)<<endl;//顯示此函數之值

    system("pause");                //暫停
    return 0;
}
int factorial(int x)               //函數定義
{
    if(x==1)//如果為一
    {
        return x;                  //回傳x之值
    }
    else//不為則以下進行運算
    {
        return x*factorial(x-1);
    }
}


注意：
14列的變數需與上面factorial相同

Q&A:
如何使用陣列表示？


//Array Input Exercise
#include <iostream>

using namespace std;

int main()
{
    int i,X[4];
    for(i=0;i<=3;i++)
        cout << "please input number";
        cin  >> X[i];
    }
    for (i=0;i<=3;i++)
        cout << X[i] << "-" ;


   return 0;
}

//pointer & address no
//Array Input Exercise
#include <iostream>                   //include輸出入工具

using namespace std;                  //std定義位址

int main()                             //主程式開頭
{
    int i,X[4];                        //宣告數字i以及含有四個數字的陣列Ｘ

    for(i=0;i<=3;i++)                  //i為零，每次加數字一，加至數字三時停止
    {
        cout << "please input number"; //顯示字串
        cin  >> X[i];                  //輸入陣列，重複四次
    }
    for (i=0;i<=3;i++)
        cout << X[i] << "-"<<endl ;           //顯示陣列，中間多加一槓
    cout << &X[0] << "-" <<endl;           //顯示陣列，中間多加一槓
    cout << &X[1] << "-" <<endl;
    cout << &X[2] << "-" <<endl;
    cout << &X[3] << "-" <<endl;

   return 0;
}


//指標搜尋
//尚未練習

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     char a[]="I am a sutdant.";
     char sc='s';
     char *sp=strchr(a,sc);
     int position=sp-a+1;
     if(sp!=NULL)
     printf("a字串的第一個's'字元出現在%d個字元",position);
     else
printf("找不到%c字元",sc);
     system("PAUSE");
     return 0;
}
