sort array
~~~
public class sort_array {
	public static void main(String[] args) {
		int[] score = {5,9,100,30,29,55,10,50,100,99,20,2};
		System.out.print("原陣列排列:");
		for(int i=0;i< (score.length); i++){
			System.out.print(score[i]+",");
		}
		System.out.println();
    //input array

		for ( int i = 0; i < (score.length); i++ )  {
			for ( int j = 0; j < i; j++ ) {
				if ( score[j] > score[j+1] ) {
					int tmp = score[j];
					score[j] = score[j+1];
					score[j+1] = tmp;
				}
			}
		}
    //sort array

		System.out.print("列出迴圈排序結果");
		for ( int i = 0; i < (score.length); i++ ) {
			System.out.print(score[i]+",");
			}
    //input array

		}
}
***************
public class a2 {
    public static void main(String[] args) {
		int[] score = {5,9,100,30,29,55,10,50,100,99,20,2};			// 定義學生成績陣列
		System.out.print("原陣列排列:");
		for(int i=0;i< (score.length); i++){
			System.out.print(score[i]+",");
		}
		System.out.println(" ");
		int tmp;									// 暫時儲存分數
		for (int i = 0; i < (score.length - 1); i++ )  {
			for ( int j = 0; j < (score.length - 1); j++ ) {
				if ( score[j] < score[j+1] ) {		// 發生前面元素比後面元素小
					tmp = score[j];
					score[j] = score[j+1];			// 較大的元素值放前面
					score[j+1] = tmp;				// 較小的元素值放後面
				}
			}
			System.out.print("列出第"+(i+1)+"次迴圈排序結果：");
			for(int k=0;k< (score.length); k++){
				System.out.print(score[k]+",");
			}
			System.out.println(" ");
		}
	}
}
~~~
Input number of array,and print array.
~~~
public class array_ number{
	public static void main(String args[]){
		java.util.Scanner variable = new java.util.Scanner(System.in);
		System.out.print("Input array:");
    int number = variable.nextInt();
		int[] array=new int[number];
		System.out.print("Input number:");
		for(int i=0;i<array.length;i++){
			array[i] = variable.nextInt();
			}
		for(int i=0;i<array.length;i++){
			System.out.print(array[i]);
			System.out.print(",");
		}
	}
}
~~~

列出陣列重複數字並丟置另一陣列列印出來
~~~
public class RrintRepeatingNumberArray {
	public static void main(String[] args) {
		int[] repeating = {5,9,100,30,29,55,10,50,100,99,20,2,9,30};
		System.out.print("原陣列排列:");
		for(int i=0;i< (repeating.length); i++){
			System.out.print(repeating[i]+",");
		}
		System.out.println();

		for (int i = 1; i < (repeating.length); i++ )  {
			for ( int j = 0; j < i; j++ ) {
				if (repeating[j] == repeating[i] ){
					System.out.print(repeating[j]+",");
				}
			}
		}
	}
}
~~~
input Currency
~~~
public class input_Currency {
    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.println("請輸入金額：");
        int P = scanner.nextInt();
        System.out.println("請輸入array個數：");
        int a = scanner.nextInt();

        int[] array=new int[a];
        for (int i = 0; i < a; i++) {
        	System.out.println("請輸入幣值金額：");
        	int Currency = scanner.nextInt();
        	array[i]=Currency;
        	int number=(P/array[i])+1;
        	System.out.println("Currency have "+ array[i]+" is "+number);
        	}

		for(int i=0;i< (array.length); i++){
			System.out.print(array[i]+",");
			}
		System.out.println();
		}
    }
~~~
