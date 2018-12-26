Eclipse資料呈列
~~~
java
Project：first
 class ：first1
 class ：first2
>>>>>>>>>>>
標頭指令：
package first;
public class first1 {  
~~~

控制敘述
數字從1連加到100
~~~
package first;
public class number_continuous_add {                  
     public static void main(String[] argv) {
        int i, sum;
        for (i = 1, sum = 0; i <=100; i++) {
        	sum+=i;//sum=sum+i
        	}
        System.out.println("1 add to 100 equal "+sum);
    }
}
***********************************************
列印遞增的*符號(關鍵：雙回圈內的交互關係)
package first;
public class Print_Asterisk {                  
     public static void main(String[] argv) {
        int i,k;
        for (i = 1; i <=5; i++) {
            for (k = 1; k <=i; k++) {
            	System.out.print("*");
            	}
            System.out.println();
            }
     }
}
~~~
輸入符號並存入陣列中的問題
~~~
public class InputSymbolDepositArray {
	public static void main(String args[]){
	String s="123456";
	char c[]=new char[s.length()];

	for(int i=0;i<s.length();i++){
		c[i]=s.charAt(i);
		System.out.println(c[i]);
		}
	}
}
~~~
輸入符號存入陣列
~~~
public class InputSymbolDepositArray {
	public static void main(String[] args) {
		java.util.Scanner scanner = new java.util.Scanner(System.in);
		System.out.println("請輸入字母：");
		String s = scanner.next();
		char c[]=new char[s.length()];

		for(int i=0;i<s.length();i++){
			c[i]=s.charAt(i);
			System.out.println(c[i]);
			}
		}
	}
~~~
java 輸入變數，數字輸入(兩種方法)
~~~
後假設變數數值
public class variable {
    public static void main(String[] args){
    	java.util.Scanner variable = new java.util.Scanner(System.in);
    	System.out.print("輸入整數:");
      int input = variable.nextInt();
      System.out.print("整數輸入:" + input);
    }
}
*******************************************************
先宣告變數數值
import java.util.Scanner;
public class variable {
    public static void main(String[] args){
    	Scanner variable = new Scanner(System.in);
    	System.out.print("輸入整數:");
      int input = variable.nextInt();
      System.out.print("整數輸入:" + input);
    }
}
~~~
函式使用
~~~
package first;
public class first1 {
    public static void main(String[] args) {
        int y = f(20);
    }
    public static int f(int x) {
        int y=2*x;
        System.out.println("f("+x+")="+y);        
        return 0;
        }
}
*******************************************************
輸入數值，使用函式計算結果：
package first;
import java.util.Scanner;
public class first1 {
    public static void main(String[] args) {
    	int x;
        Scanner scanner = new Scanner(System.in);
        System.out.println("請輸入數字：");
        x = scanner.nextInt();                        //輸入數字num1  	
        int y = f(x);
    }
    public static int f(int x) {
        int y=2*x;
        System.out.println("f("+x+")="+y);        
        return 0;
        }
}
~~~
九九乘法表列出：
~~~
package first;
public class first1 {
     public static void main(String []args){
         for (int i=1;i<10;i++)
        {    for (int j=1;j<=i;j++)
            {
                System.out.print(" "+i+"*"+j+"="+(i*j));   // print()方法在顯示文字後不換行
            }
            System.out.println();                         // println()方法在顯示文字後換行
        }
    }
}
*******************************************************
九九乘法表 丟入陣列
package first;
public class first1 {
     public static void main(String []args){
    	 int [][] c=new int[10][10];
         for (int i=1;i<10;i++)
        {    for (int j=1;j<=i;j++)
            {
        	int k=i*j;
    		c[i][j]=k;
        	System.out.println(i+"*"+j+"="+c[i][j]);     	        	
            }
        System.out.println();
        }
    }
}
~~~
數字輸入(java.util.Scanner)與次方計算(Math.pow(i,2))
~~~
package first;
import java.util.Scanner;

public class first1 {
    public static void main(String[] args) {
        int num1;
        Scanner scanner = new Scanner(System.in);

        System.out.println("請輸入數字：");
        num1 = scanner.nextInt();                        //輸入數字num1
        int i, sum;
        for (i = 1, sum = 0; i <= num1; i++) {          //迴圈
            sum+=Math.pow(i,2);                         //sum=sum+i^2
        }
        System.out.println("Secondary addition from 1 to "+num1+" is "+sum);        
    }
}
~~~
函數
~~~
package first;
import java.util.Scanner;

public class first1 {
    public static void main(String[] args) {
        int x = f(5);
        System.out.println("f(5)="+x);
    }
    public static int f(int n) {
        System.out.println("n="+n);
        if (n == 0)
            return 1;
        else {
            int fn_1 = f(n-1);
            System.out.println("f("+(n-1)+")="+fn_1);
            return fn_1*n;
        }
    }
}
**********************************************
package first;
import java.util.Scanner;
public class first2 {
   public static void main(String[] args) {
        int num;
        Scanner scanner = new Scanner(System.in);
        System.out.println("請輸入數字：");
        num = scanner.nextInt();                        //輸入數字num1
        int x = S(num);                                 //呼叫函數
        System.out.println("Secondary addition from 1 to "+num+" is "+x);
      }
   public static int S(int num1) {                    //函數
	int i, sum;
	for (i = 1, sum = 0; i <= num1; i++) {       //迴圈
		sum+=Math.pow(i,2);                  //sum=sum+i^2
		//System.out.println("S("+i+")="+sum);可列印全部
	}
	return sum;
	}    
}
~~~
Java 質數
~~~
package first;
public class first1{
	public static void main(String[] args){
		int sum;
		for(int i=1;i<=100;i++){
			sum = 0;
			for(int j=1;j<=i;j++){	//迴圈由1跑到自己
				if(i%j==0)	//若可整除累加計數器
					sum++;
				}
			if(sum == 2)		//1與自己必然整除，所以只有2個可整除的即為質數
				System.out.print(i + ".");
			}
		}
	}
********************************************************
輸入數字內所擁有的質數：
package first;
import java.util.Scanner;
public class first1{
	public static void main(String args[]){
		Scanner scanner=new Scanner(System.in);
		System.out.println("請輸入一數值：");
		int input=scanner.nextInt();
		System.out.print(input+" 以下的質數有：\n");//質數是除了1與該數本身外..不被該數之前的任何數整除
		for(int i=2;i<=input;i++) //從2到輸入值範圍的迴圈..
			{
			boolean isPrime=true; //判斷是否為質數的布林變數
			for(int j=2;j<i;j++) //做除法運算的內迴圈..由2開始到小於輸入的值..每一個去作除法運算
				{
				if(i%j==0) //餘數為0表示可以整除
					{
					isPrime=false; //就不是質數..break跳出迴圈
					break;
					}
				}
			if(isPrime) //若是質數..印出該數值..
				{
				System.out.print(i+" ");
				}
			}
		}
	}
~~~
