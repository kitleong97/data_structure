#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{long long int a,b=0;
int cond=0;


while(scanf("%lld",&a)!=EOF)
{
for(long long int i=2;i<=a/2;i++)
{//printf("%d\n",i);

if(a%i==0 && a!=i)
{cond=0;
break;}

cond=1;
}

if(cond)
{printf("YES\n");}
else
{printf("NO\n");}

cond=0;

}
return 0;
}




/*

質數判別
成績: 0 / 倒扣: 0.8
問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指大於1的正整數中，除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

輸入說明：

輸入一個正整數(< 231 – 1)。

輸出說明：
質數顯示 YES ；非質數顯示 NO 。
範例：

 

Sample Input:

Sample Output:

23
37
39

YES
YES
NO


*/
