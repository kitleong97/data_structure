#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int a,b;
int cond=0;



while(scanf("%d %d",&a,&b)!=EOF)
{

if(a>100||b>100)
{cond=1;}



if(cond==0)
{printf("inside\n");}
else
{printf("outside\n");}

cond=0;
}




return 0;
}




/*

判斷座標是否在正方形的範圍內
成績: 0 / 倒扣: 0.8
問題描述：
有一正方形，長、寬均為100，且起始座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在正方形的範圍內。如果「點」的位置剛好在邊界的話也算是在正方形範圍內(例：x=100，y=10)。

test

輸入說明：
每一組輸入有兩正整數字，分別代表X與Y座標。

輸出說明：
輸出此點座標在正方形範圍內或外。

範例：

輸入範例:

輸出範例:

10 20
150 150

inside
outside


*/
