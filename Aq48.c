#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int ios(char q)
{
for(int i=48,j=0;i<=57;i++,j++)
{
if(q==i)
{return j;}

}

}

int main()
{
	int a,b,c,d;
    char A,B,C,D;
	while(scanf("%c%c%c%c",&A,&B,&C,&D)!=EOF)
{
a=ios(A);
b=ios(B);
c=ios(C);
d=ios(D);

a=(a+7)%10;
b=(b+7)%10;
c=(c+7)%10;
d=(d+7)%10;  
printf("%d%d%d%d\n",c,d,a,b);
  }
  return 0;
}





/*

數字加密
成績: 0 / 倒扣: 0.8
問題描述：

讀取四位數字的整數，並且按下序方式加密：

公式：

（該位數＋７）％１０取代每個數字。

然後將第一個位數的數字和第三個位數的數字交換，

將第二個位數的數字，和第四個位數的數字交換。

輸入說明：

輸入一組四位數字

輸出說明：

公式：

（該位數＋７）％１０取代每個數字。

然後將第一個位數的數字和第三個位數的數字交換，

將第二個位數的數字，和第四個位數的數字交換。

範例：

Sample Input

Sample Output

1234

0189


*/
