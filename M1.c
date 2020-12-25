#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int a,b,c;


while(scanf("%d %d %d",&a,&b,&c)!=EOF)
{

printf("Trapezoid area:%.1f\n",((float)((a+b)*c))/2);



}




return 0;
}




/*

計算梯型面積
成績: 0 / 倒扣: 0.8
問題描述：
請以 JAVA 運算式計算下面梯形面積，並輸出面積結果。
※ 梯形面積公式為：（上底 + 下底） × 高 ÷ 2 。

picture01-1
輸入說明 ：
每一組依序分別輸入梯形的上底、下底及高的整數。

輸出說明 ：
輸出梯形面積。

範例：

輸入範例:

輸出範例:

94 190 120
99 54 47

Trapezoid area:17040.0
Trapezoid area:3595.5


*/
