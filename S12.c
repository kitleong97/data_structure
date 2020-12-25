#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int i,j=0;
int max;
scanf("%d %d",&i,&j);

if(i==j)
{
for(int lvl=0;lvl<j;lvl++)
{printf("*");}
printf("\n");
}
else if(i<j)
{
for(int lvl=i;lvl<=j;lvl++)
{

for(int cnt=0;cnt<lvl;cnt++)
{printf("*");}

printf("\n");
}
}
else
{
for(int lvl=i;lvl>=j;lvl--)
{

for(int cnt=0;cnt<lvl;cnt++)
{printf("*");}

printf("\n");
}
}
return 0;
}


/*

星號依規則輸出
成績: 0 / 倒扣: 0.8
問題描述：
參考範例輸入輸出的形式畫出星星。

輸入說明：
兩個正整數 A,B(1<=A,B<=100, |A-B|<=20) 。

輸出說明：
請參考範例輸出。
範例：

Sample Input:

Sample Output:

4 7

****
*****
******
*******

10 1

**********
*********
********
*******
******
*****
****
***
**
*

*/
