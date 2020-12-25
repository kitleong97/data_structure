#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{int a,b,c;



while(scanf("%d %d",&a,&b)!=EOF)
{

if(a>b)
{c=b;}
else if(a==b)
{c=b;}
else
{c=a;}


while(c)
{
if((a%c==0)&&(b%c==0))
{printf("%d\n",c);
break;}

c--;
}



}
return 0;
}




/*

求最大公因數
成績: 0 / 倒扣: 0.8
問題描述：
輸入兩個數字，找出它們的最大公因數

輸入說明：
輸入一組兩個整數。

輸出說明：
輸出兩數字的最大公因數。

範例：

輸入範例:

輸出範例:

25 15

5


*/
