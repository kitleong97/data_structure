#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int i,j=0;
int max;
int cond;

while(scanf("%d",&i)!=EOF)
{

max=i;

for(int lvl=0;lvl<i;lvl++)
{

for(int cnt=0;cnt<max-1;cnt++)
{printf(" ");}
max--;


if((lvl)%2==0)
{
for(int cnt=0;cnt<lvl+1;cnt++)
{printf("%d",cnt+1);}
}

else
{
for(int cnt=lvl+1;cnt>0;cnt--)
{printf("%d",cnt);}
}



printf("\n");
}




}
return 0;
}

/*
數字直角三角形輸出
成績: 0 / 倒扣: 0.8
問題描述：
撰寫一個程式，給你一個數字，請你參考範例輸入輸出的形式顯示圖形樣式。

輸入說明：
輸入一個正整數，介於 1 ～ 9 。

輸出說明：請參考範例輸出。
範例：

Sample Input:

Sample Output:

3
5

ST14-1

ST14-2
*/

