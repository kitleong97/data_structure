#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{int a,b=0;
int cond=0;


while(scanf("%d",&a)!=EOF)
{
for(int i=1;i<=a;i++)
{

if(i%5==0&&i%7==0&&cond==0)
{b=i;
printf("%d",b);
cond=1;
continue;}
if(i%5==0&&i%7==0&&cond==1)
{b=i;
printf(" %d",b);}

}

printf("\n");
cond=0;
}
return 0;
}




/*
計算1到N之間屬於5和7的倍數
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，讓使用者輸入任意正整數 N ，可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。

輸入說明：
輸入一個正整數。

輸出說明：
輸出 5 和 7 的倍數的數字。

範例：

Sample Input:

Sample Output:

100
250

35 70
35 70 105 140 175 210 245



*/
