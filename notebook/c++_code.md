c++ of code
===

Input radius,and to Calculate with area and perimeter.
---
~~~
#include <iostream>
using namespace std;
int main()
{
    double radius;
    const double pi=3.14159;
    double area;
    double perimeter;
    cout << "Program to compute and output the perimeter and " << "area of a circle." << endl;

    while (radius!=0)         //半徑為零，跳出while迴圈(停止)
    {
        cout << "Input radius = ";
        cin >> radius;
        area = radius*radius * pi;
        perimeter=2*radius* pi;
        cout << "radius = " << radius << endl;
        cout << "Perimeter = " << perimeter << endl;
        cout << "Area = " << area << endl;
    }
return 0;
}
~~~
ellipse perimeter
---

~~~
#include <iostream>                                        //輸出入的工具箱
#include <cmath>                                           //數學函數工具箱

using namespace std;                                       //執行的一個程式命名空間

int main()                                                 // 主程式開頭處
{
    float a,b,perimeter;                                   //變數物件的設立
    const float pi=3.14159;                                //常數物件的設立
    
    cout <<"Put a,b nunber:";                              // 銀幕輸出，眼睛看的見的內容
    cin >>a>>b;                                            // 輸入函數值a,b
    
    perimeter=pi*(3*(a+b)-sqrt((3*a+b)*(a+(3*b))));        //使用的函數，a,b帶入，程式自然會出來perimeter
    cout <<"ellipse perimeter is"<<perimeter<<endl;        //螢幕顯示perimeter之數值
    return 0;
}
~~~
改良版，a&b=0即停止(兩數中有數值0即停止)，採用function and while loop。

~~~
#include <iostream>
#include <cmath>
using namespace std;

float perimeter(int,int);// Function declaration

int main()
{
    float a,b;
    
    cout <<"Put a,b nunber:";
    cin >> a >> b;
    
    while(( a && b )!=0)                    //判斷兩數皆不為0即執行下列函式
     {cout <<perimeter(a,b)<<endl;          //呼叫(使用)下方函式的工具，為執行下方函式的工具
     cout <<"Put a,b nunber:";              //輸出文字
     cin >> a >> b ;                        //輸入a,b數值
     }
     return 0;                               //回傳數值零，即為結束此完整程式
}

float perimeter(int a,int b)                 //Function definition
{
    float abc;
    const float pi=3.14159;
    
    abc=pi*(3*(a+b)-sqrt((3*a+b)*(a+(3*b))));
    cout <<"ellipse perimeter is"<<abc<<endl;
    return 0;
}
~~~

fstream
---

C++與檔案處理相關
須先函入fstream標頭，
ifstream物件處理檔案輸入，
ofstream物件處理檔案輸出，

建立串流物件之後，
可以使用open()函式來連結串流，

~~~
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Declare variables; Step 1
    ifstream inFile;
    ofstream outFile;

    double test1, test2, test3, test4, test5;
    double average;

    string firstName;
    string lastName;

    inFile.open("abc.txt"); //Step 2
    outFile.open("cba.txt"); //Step 3
    outFile << fixed << showpoint; //Step 4
    outFile << setprecision(2); //Step 4

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName; //Step 5
    outFile << "Student name: " << firstName<< " " << lastName << endl; //Step 6
    inFile >> test1 >> test2 >> test3>> test4 >> test5; //Step 7
    outFile << "Test scores: " << setw(6) << test1<< setw(6) << test2 << setw(6) << test3<< setw(6) << test4 << setw(6) << test5<< endl; //Step 8

    average = (test1 + test2 + test3 + test4+ test5) / 5.0; //Step 9
    outFile << "Average test score: " << setw(6)<< average << endl; //Step 10

    inFile.close(); //Step 11
    outFile.close(); //Step 11

    return 0;
}
~~~
abc.txt
---
~~~
a b 25 80 50 50 50 
~~~

cba.txt
---
~~~
Student name: a b
Test scores:  25.00 80.00 50.00 50.00 50.00
Average test score:  51.00
~~~
讀入一個txt檔，並將檔案內容寫到另一個txt檔上。
~~~
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    fin.open("abc.txt");
    fout.open("cba.txt");

    if(!fin){
        return 1;
    }

    char ch;
    //用!fin.eof()來判斷，最後會多讀一次
    while(fin.peek()!=EOF) {
        fin.get(ch);
        fout.put(ch);
    }

    fin.close();
    fout.close();
    return 0;
}
~~~

備註:

iomanip：setprecision(2)>>0.00

iomanip：setw(10)>>「  」

~~~
 // setw example
 #include <iostream>     // std::cout, std::endl
 #include <iomanip>      // std::setw

int main () {
    std::cout << std::setw(100);
    std::cout << 77 << std::endl;
    return 0;
}
~~~

~~~
// setw example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw
using namespace std;

int main () {
    cout << setw(100);
    cout << 77 << endl;
    return 0;
}
~~~


hailstone雹石序列
~~~
int hailstone(int n) {
    int length = 1;
    while( 1 < n) {
        (n % 2)? n = 3 * n + 1 : n /= 2;
        length++;
    return length;
}
~~~
完整code
~~~
# include <iostream>
# include <vector>
using namespace std;

int main()
{
    vector<int>vect;
    int nbr;
    cout << "Enter your nbr -> ";cin >> nbr;
    while(nbr!=1)
    {
        if(nbr%2)//mean It's odd
        {
            nbr = nbr*3+1;
            vect.push_back(nbr);
        }else
        {
            nbr /= 2;
            vect.push_back(nbr);
        }
    }
    for(size_t i=0;i<vect.size();i++)
        cout << vect[i] << ",";
    cout << "\b ...";

    return 0;
}

****************************************************
#include <iostream>
#include <string>
using namespace std;

void parseSequence(long n, long o) {
    long m = n;
    if (m % 2 == 0) {
        m /= 2;
    }
    else if (m != 1) {
        m = m * 3+1;
    }
    cout << m << endl;
    if (m == 1) {
        cout << "End of sequence! (sequence's lenght is " << o << ")." << endl;
    }
    else {
        o++;
        parseSequence(m, o);
    }
}

int main() {
    string p;
    long n;
    cout << "Which is the number to calculate the Hailstone sequence?\n";
    cin >> n;
    parseSequence(n, 1);
    cout << "Parse more sequence?\n\n(y|n)\n\n:";
    cin >> p;
    if (p == "y" or p == "Y") {
        return main();
    }
    else return 0;
}
****************************************************
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int a;
    if(argc < 2)
    {
        printf("请输入计算数w:\n");
        scanf("%d", &a);
    }
    else
    {
        a = atoi(argv[1]);
    }
    int length = 1;
    int i = 1;
    //for(i = 1; 1 < a ;i++)
    while(1 < a)
    {
        //(a % 2)? a = 3 * a + 1 : a /= 2;
        
        if(a % 2)
        {
            a = a * 3 + 1;
            printf("%4d:%4d", length,a);
            for (i = 0; i < a; i++){
                printf("*");
            }
            printf("\n");   
        }
        else
        {
            a = a / 2;
            printf("%4d:%4d", length,a);
            for (i = 0; i < a; i++){
                printf("*");
            }
            printf("\n"); 
        }
        // if(a == 1)
        //      break;

        length++;
    }
    return 0;
}
~~~
