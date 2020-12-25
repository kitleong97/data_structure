#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int i,j;
scanf("%d %d",&i,&j);

for(int lvl=0;lvl<j;lvl++)
{for(int cnt=0;cnt<i;cnt++)
{printf("*");}
printf("\n");
}



return 0;
}

/*

星號矩形輸出
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，可讓使用者輸入矩形的長寬，並於螢幕上輸出為星號 * 所組成的矩形。

輸入說明：
輸入兩個正整數。

輸出說明：
請參考範例輸出。
範例：

Sample Input:

Sample Output:

5 3	
*****
*****
*****

*/

