#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{long long int a=0;




while(scanf("%lld",&a)!=EOF)
{

for(long long int i=1;i<=a;i++)
{
printf("%lld*%lld=%lld\n",i,i,i*i);
}



}
return 0;
}




/*

輸出 1*1、2*2、...、N*N之結果
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。

輸入說明：
輸入一正整數。

輸出說明：
輸出相乘的積。

範例：

輸入範例:

輸出範例:

5

1*1=1
2*2=4
3*3=9
4*4=16
5*5=25


*/
