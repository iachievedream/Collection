
Bubble Sort
Selection Sort
Insertion Sort
Shell Sort

Quick Sort
Heap Sort
Radix Sort

************************************************************************************
Bubble Sort

#include<stdio.h>
#include<stdlib.h>
int main()                                  //主程式開頭
{
    int i,j,tmp;
    int data[8]={12,56,78,34,75,86,34,24};
    printf("氣泡排序法：\n原始資料：");
    for (i=0;i<8;i++)
        printf("%3d",data[i]);
    printf("\n");
    for(i=7;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(data[j]>data[j+1])
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
        printf("第%d次排序後的結果是：",i);
        for(j=0;j<8;j++)
            printf("%3d",data[j]);
        printf("\n");
    }
    printf("排序的結果為：");
    for(i=0;i<8;i++)
        printf("%3d",data[i]);
    printf("\n");
    system("pause");
    return 0;                                   //回傳值為零
}
~~~
************************************************************************************

Selection Sort


Insertion Sort

#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
void inser(int *);
void showdata(int *);
int main()                                  //主程式開頭
{
    int data[SIZE]={6,4,36,23,56,43,53,65};
    
    printf("original array:");
    showdata(data);
    printf("\n");
    inser(data);
    printf("arrangement array");
    showdata(data);
    return 0;
}

void showdata(int data[])
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%3d",data[i]);
    printf("\n");
}

void inser(int data[])
{
    int i,no,tmp;
    for (i=1;i<SIZE;i++)
    {
        tmp=data[i];
        no=i-1;
        while (no>=0 &&tmp<data[no])
        {
            data[no+1]=data[no];
            no--;
        }
        data[no+1]=tmp;
    }
}
************************************************************************************

Shell Sort

Quick Sort
Heap Sort
Radix Sort

~~~