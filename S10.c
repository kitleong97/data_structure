#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int i,j=0;
scanf("%d",&i);
j=i-1;
for(int lvl=0;lvl<i;lvl++)
{
for(int cnt=0;cnt<j;cnt++)
{printf(" ");}
j--;
for(int cnt=1;cnt<=lvl+1;cnt++)
{printf("*");}

printf("\n");
}



return 0;
}

/*
星號直角三角形輸出
成績: 0 / 倒扣: 0.8
問題描述：
請撰寫一個程式，執行後可以在螢幕上顯示以下圖形：

    *
   **
  ***
 ****
*****

輸入說明：
輸入一個正整數。

輸出說明：
請參考範例輸出。
範例：

Sample Input:

Sample Output:

5

    *
   **
  ***
 ****
*****

*/

