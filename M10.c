#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{float a;



while(scanf("%f",&a)!=EOF)
{

printf("%.1f\n",a*9/5+32);



}




return 0;
}




/*
 攝氏溫度轉華式溫度
成績: 0 / 倒扣: 0.8
問題描述：
請撰寫一個程式，依據代表攝氏溫度的變數ｃ的值，顯示華氏溫度(已知攝氏溫度等於華氏溫度減32度再乘上5/9)。

輸入說明：
輸入攝氏溫度(數值不一定都是整數)。

輸出說明：
輸出華氏溫度(四捨五入取至小數點第一位，整數需補零)。

範例：

輸入範例:

輸出範例:

27
32.5

80.6
90.5



*/
