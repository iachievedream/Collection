# java-note

使用軟體：Eclipse，Java

<a href="https://www.pcsetting.com/devtools/80?page=0%2C0">Eclipse教學</a>

cmd：編譯：javac HelloWorld。執行：java HelloWorld

環境變數：
新增 > 變數名稱(N): CLASSPATH
		變數值(V): .;C:\Program Files (x86)\Java\jdk1.7.0_51\lib;C:\Program Files (x86)\Java\jdk1.7.0_51\lib\tools.jar;

新增 > 變數名稱(N): JAVA_HOME
		變數值(V): C:\Program Files (x86)\Java\jdk1.7.0_51

新增 > 變數名稱(N): PATH
		變數值(V): %JAVA_HOME%\bin;

編輯系統變數>>PATH>>C:\Program Files\Java\jdk1.8.0_181\bin

cmd input：java -version
~~~
package first;                                         //專案(java Project)
public class first1 {                                  //class類別的檔案，需與檔名相同
	public static void main(String[] args) {       //主程式內容
		// TODO Auto-generated method stub     /
	}
}
**************************
建立：java Project
Project name：first
>>finish
***
package Explorer(左側欄位)
first 檔名按右鍵(Right click)
New>>class
Name：first1
勾選：public static void main(String[] args) {
完成java編譯環境

資料架構：
Project：first
>>class：first1
>>class：first2

復原Eclipse版面配置：Window -> Reset Perspective
Eclipse顯示程式碼行數：
Windows > Preferences > General > Editors >
Text Editors > show line numbers


~~~
第一個java程式，檔名：HelloWorld.java
~~~
package first;                                 //須與專案相同名稱
public class HelloWorld{                       // 宣告類別名稱，與檔名相同
    public static void main(String []args){   // 宣告 main() 方法
       System.out.println("Hello World");     // 於命令列印出訊息
    }
}
~~~
變數呈現，檔名：first1.java
~~~
package first;                                    //須與專案相同名稱
public class first1 {                             //須與class相同名稱
    public static void main(String[] args) {      //主程式開頭
        int ageOfStudent = 18;                    //宣告int並指定值
        char sexOfStudent = 'M';                  //宣告char並指定字串

        System.out.print("學生年齡: ");            //print()方法在顯示文字後不換行
        System.out.println(ageOfStudent);         //println()方法在顯示文字後換行
        System.out.print("學生姓別: ");
        System.out.println(sexOfStudent);         //取得變數的值

        ageOfStudent = 20;                        //另設變數數值
        sexOfStudent = 'F';                       //另設變數數值
        System.out.print("學生年齡: ");            //列印學生年齡:
        System.out.println(ageOfStudent);         //列印ageOfStudent數值
        System.out.print("學生姓別: ");
        System.out.println(sexOfStudent);
    }
}
~~~
次方計算，檔名：first1.java
~~~
package first;
public class first1 {                  
     public static void main(String[] argv) {
        int i, sum;
        for (i = 1, sum = 0; i <= 3; i++) {
            sum+=Math.pow(i,2);        //sum=sum+i^2
        }
        System.out.println("summation from 1 to 3 is "+sum);
    }
}
~~~
字串列印：
~~~
package first;
public class first1
{
	public static void main(String[] args) {
	    int spend=120;
	    int hous=8;
	    int total;
	    total=spend*hous;
		System.out.println("My mamey is "+total+" dollor");
	}
}
~~~


物件與類別：
~~~
class Dog {
	String name;
	int age;
	//屬性(attributes)
	void printInfo() {
		System.out.println("狗名字是 : " + name);
		System.out.println("狗年齡是 : " + age);
		//方法(method)
	}
}
public class body {
	public static void main(String[] args) {
		Dog myDog = new Dog();		// 宣告與建立myDog物件		
		java.util.Scanner dogsomething = new java.util.Scanner(System.in);
		System.out.println("Please input name.");
		myDog.name = dogsomething.next();
		System.out.println("Please input age.");
		myDog.age = dogsomething.nextInt();
		myDog.printInfo();
	}
}
******************************************************
package first;
class first2 {
	public static void main(String[] args) {
		C c1,c2;					//類別產生一個物件為c1
		c1 =new C();				//宣告物件c1
		c2 =new C();

		System.out.println("new.i = "+c1.i);
		System.out.println("new.i = "+c2.i);

		c1.i =5;
		System.out.println("new.i = "+c1.i);
		System.out.println("new.i = "+c2.i);
		}
	}
class C {
	int i=100;
}
*****************************************
class內容合在一起

class Ccar {                      //汽車類別
   private double gas, tbo;       //宣告最多載油量, 平均耗油量
   private double max_dist = 0;   //加滿油可行駛最長距離

   private void MaxDist() {       //計算可行駛最長距離
      max_dist = gas * tbo;
   }
   public void SetValue(double g, double t) { //傳入資料
      gas = g;
      tbo = t;
      MaxDist();
   }

   public double GetDist() {      //傳出資料
      return max_dist;
   }
}
public class first1 {       //主類別
   public static void main(String[] args) {   //主程式
      Ccar car1;                              //宣告car1物件
      car1 = new Ccar();                      //建立car1物件
	  double g1 = 40.7, t1 = 13.6;
	  car1.SetValue(g1, t1);                  //設定car1物件的屬性值
	  double distance1 = car1.GetDist();      //取得car1物件的方法傳回值
	  Ccar car2 = new Ccar();                 //宣告並建立car2物件
	  car2.SetValue(60, 9.5);                 //設定car1物件的屬性值
	  System.out.println("car1加滿油可行駛 " + distance1 + " km");
	  System.out.println("car2加滿油可行駛 " + car2.GetDist() + " km");
   }
}

*****************************************
class檔案分開
*****************************************
Ccar.java
package first;
public class Ccar {                    //汽車類別
    public double gas, tbo;            //宣告最多載油量, 平均耗油量
	public double max_dist = 0;        //加滿油可行駛最長距離
	public void MaxDist() {             //計算可行駛最長距離
	    max_dist = gas * tbo;
	}
	public double Dist(double oil) {   //一般加油可行駛距離
	    return oil * tbo;
	}
}
*****************************************BuildObject
package first;
public class first1 {                    //主類別
	public static void main(String[] args) {  //主程式
		Ccar car1;                            //宣告car1物件
		car1 = new Ccar();                    //建立car1物件
		car1.gas = 40.7;                      //設定car1物件的屬性值
		car1.tbo = 13.6;
		car1.MaxDist();                       //呼叫car1物件的方法
		double distance = car1.Dist(10);      //呼叫car1物件的方法,並取得傳回值

		Ccar car2 = new Ccar();               //宣告並建立car2物件
		car2.gas = 60;                        //設定car2物件的屬性值
		car2.tbo = 9.5;

		System.out.println("car1汽車資訊：");
		System.out.println("最大載油量：" + car1.gas + " L");
		System.out.println("平均耗油量：" + car1.tbo + " km/L");
		System.out.println("加滿油可行駛 " + car1.max_dist + " km");
		System.out.println("加油10L可行駛 " + distance + " km");
	}
}

兩個內容放在一起可以，但只能有一個「public class」
~~~

多執行緒
~~~
package first;
public class first2 {
	public static void main(String[] args) {
		Thread tortoise = new Thread() {
			public void run() {
				for (int i = 1; i <= 20; i++) {
					System.out.println("烏龜共跑 " + i + " 公里");
				}
				System.out.println("烏龜到達終點!!!");
			}
		};
		Thread rabbit = new Thread() {
			public void run() {
				for (int i = 4; i <= 20; i += 4) {
					if ((int) (Math.random() * 10 + 1) % 2 == 0) {
						System.out.println("兔子休息");
						i -= 4; // -4使兔子不動
					} else {
						System.out.println("兔子共跑 " + i + " 公里");
					}
				}
				System.out.println("兔子到達終點!!!");
			}
		};
		rabbit.start();
		tortoise.start();
	}
}

#Thread obT = new Thread() {
	public void run() {
	obT.start();

***************************************

package first;
	class GoldClass implements Runnable { // 實作Runnable介面
		int grabed; // 已偷到的金塊數量
		static int totalGold = 20000000; // 金塊總數
		Thread t;

		GoldClass(String name) {
			grabed = 0;
			t = new Thread(this, name);
			t.start(); // 啟動執行緒
		}
		public void run() { // 實作Runnable介面的run()方法
			while (grabGold() == true) { // 判斷金塊是否還有剩
				grabed++; // 偷到一塊
			}
			System.out.println(t.getName() + " 總共偷得 " + grabed + " 個金塊.");
		}
		private static boolean grabGold() {//非同步執行緒
		//private synchronized static boolean grabGold() {同步執行緒
			if (totalGold > 0) { // 若金塊還有剩才能偷
				totalGold--; // 偷一塊金塊
				return true;
			} else {
				return false;
			}
		}
	 }
	public class first1 {
		public static void main(String[] args) {
			System.out.println("共有 " + GoldClass.totalGold + " 個金塊!");
			GoldClass tA = new GoldClass("張三");
			GoldClass tB = new GoldClass("李四");
			GoldClass tC = new GoldClass("王五");
		}
	}

#
private static boolean grabGold() {非同步執行緒
private synchronized static boolean grabGold() {同步執行緒
~~~
