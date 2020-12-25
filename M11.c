#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int a;
int b,c,d;



while(scanf("%d",&a)!=EOF)
{
b=a/10;
printf("NT10=%d\n",b);
a=a-b*10;
c=a/5;
printf("NT5=%d\n",c);
a=a-c*5;
d=a/1;
printf("NT1=%d\n",d);


}




return 0;
}




/*
購票計算
成績: 0 / 倒扣: 0.8
問題描述：
假設火車站的自動售票機只能接受10元、5元、以及1元的硬幣，請撰寫一個程式，算出乘客所購買票價N元車票時，所需投入各種幣值硬幣最少的數量？

輸入說明：
輸入票價。

輸出說明：
輸出各幣值硬幣最少的數量。

範例：

輸入範例:

輸出範例:

37

NT10=3
NT5=1
NT1=2



*/
