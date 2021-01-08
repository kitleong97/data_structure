#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
#include<ctype.h>  
  
int main()  
{int a=0;  
int total=0;  
while(scanf("%d",&a)!=EOF)  
{  
 

if(a==1)
{printf("1 = 1\n");}
else
{printf("1 ");
total=1;
for(int cnt=1;cnt<a;cnt++)
{printf("+ %d ",cnt+1);
total+=cnt+1;}
  
printf("= %d\n",total);
 } 
}  
  
  
return 0;  
}  





/*

[C_MM40-易] 1~N之間的總和
成績: 0 / 倒扣: 0.8
問題描述：
撰寫一個程式，輸入一個正整數 N ( 0 < N < 100 ) ，計算 1 ～ N 之間 的總和。

輸入說明：
輸入一個正整數。

輸出說明：
輸出總和，顯示格式如範例。
範例：

Sample Input:

Sample Output:

1

1 = 1

2

1 + 2 = 3

3

1 + 2 + 3 = 6



*/
