變形九九乘法表
~~~
public class Deformation_Multiplication_table {                  
     public static void main(String[] argv) {
        int i, sum;
        for (i = 2, sum = 1; i <6; i++) {
        	for(sum=1;sum<4;sum++){
                System.out.println(i+"*"+(i+sum)+"="+i*(i+sum));
        	}
            System.out.println();
        }
    }
}
~~~
數字*列印
請輸入數字：
3
***
~~~
import java.util.Scanner;

public class Print_Asterisk {
    public static void main(String[] args) {
        int num1;
        Scanner scanner = new Scanner(System.in);
        System.out.println("請輸入數字：");
        num1 = scanner.nextInt();                        //輸入數字num1
        int i;
        for (i = 1; i <= num1; i++) {          //迴圈
        	System.out.print("*");
        }
    }
}
~~~
請輸入數字：
2
*
**
~~~
public class Print_Asterisk_rank {
    public static void main(String[] args) {
        java.util.Scanner Asterisk = new java.util.Scanner(System.in);
        System.out.print("請輸入數字：");
        int num1 = Asterisk.nextInt();                        //輸入數字num1
        for (int i = 1; i <= num1; i++) {          //迴圈
        	for(int j=1;j<=i;j++){
        		System.out.print("*");
        		}
    		System.out.println("");
    		}
        }
}
~~~
請輸入數字：
3
*
**
***
**
*
~~~
import java.util.Scanner;
public class Print_Asterisk_rank_back {
    public static void main(String[] args) {
        int num1;
        Scanner scanner = new Scanner(System.in);
        System.out.println("請輸入數字：");
        num1 = scanner.nextInt();                        //輸入數字num1
        int i,j;
        for (i = 1; i < num1; i++) {          //迴圈
        	for(j=1;j<=i;j++){
        		System.out.print("*");
        		}
    		System.out.println("");
    		}
        for (i = num1; i >= 1; i--) {          //迴圈
        	for(j=1;j<=i;j++){
        		System.out.print("*");
        		}
    		System.out.println("");
    		}
      }
}
~~~
給予花費金額(P)，並算出需幾個幣值已付此金額
~~~
public class need_Currency {
    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.println("請輸入數字：");
        int P = scanner.nextInt();

        System.out.println(P);
        System.out.println("請輸入幣值金額：");
        int Currency = scanner.nextInt();
        int number=(P/Currency)+1;
        System.out.print("Currency have "+ number);
    }
}
~~~
列出陣列重複數字並丟置另一陣列列印出來
~~~
RrintRepeatingNumberArray

~~~
