#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{long long int a,b=1;




while(scanf("%lld",&a)!=EOF)
{
b=1;
while(a!=0)
{
b*=a;
a--;
}

printf("%lld\n",b);






}
return 0;
}




/*

算階乘
成績: 0 / 倒扣: 0.8
題目描述:
算階乘

輸入說明:
輸入一個整數 n，0 < n < 20

輸出說明:
輸出答案


範例：

輸入範例:

輸出範例:

6
3
7

720
6
5040


*/
