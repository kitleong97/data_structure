#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int i,j=0;
int max;
int cond;
scanf("%d",&i);

if(i%2==0)
{max=(i-2)/2;
cond=-1;}
else
{max=(i-1)/2;
cond=0;}

j=max;
for(int lvl=0;lvl<max+1;lvl++)
{

for(int cnt=0;cnt<j;cnt++)
{printf(" ");}
j--;
for(int cnt=0;cnt<lvl*2+1;cnt++)
{printf("*");}


printf("\n");
}

j=max*2-1;
for(int lvl=0;lvl<max;lvl++)
{

for(int cnt=0;cnt<lvl+1;cnt++)
{printf(" ");}

for(int cnt=0;cnt<j;cnt++)
{printf("*");}

j--;
j--;
printf("\n");
}




return 0;
}

/*
 星號菱形輸出
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，可以繪製出如下的圖形：（若輸入偶數，將自動少一行 ) 。

   *
  ***
 *****
*******
 *****
  ***
   *  

輸入說明：
輸入一個正整數n(7~50)。

輸出說明：
請參考範例輸出。
*前方空格數為：(n-(*數))/2 ※如n為偶數n再減1。
如n=7，第一行為(7-1)/2=3個空白。
第二行為(7-3)/2個空白。
若n=8，第一行為(8-1-1)/2=3個空白。
第二行為(8-1-3)/2個空白。

範例：

 

Sample Input:

Sample Output:

7

   *
  ***
 *****
*******
 *****
  ***
   *

*/

