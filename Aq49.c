#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//void ios(char line[],int table[],int cnt)
//{}

int main()
{
	int a,tmp,q;
    char line[1000];

fgets(line,1000,stdin);
scanf("%d",&a);

for(int i=0;i<strlen(line);i++)
{
if(line[i]>=48&&line[i]<=57)
{tmp=a%10;
q=tmp+line[i];
if(q>57)
{q-=10;
line[i]=q;}
else
{line[i]=q;}
}
else if(line[i]>=65&&line[i]<=90)
{tmp=a%26;
q=tmp+line[i];
if(q>90)
{q-=26;
line[i]=q;}
else
{line[i]=q;}
}
if(line[i]>=97&&line[i]<=122)
{tmp=a%26;
q=tmp+line[i];
if(q>122)
{q-=26;
line[i]=q;}
else
{line[i]=q;}
}
else
{continue;}




}
printf("%s",line);
  return 0;
}





/*
字母往前移
成績: 0 / 倒扣: 0.8
問題描述

志明跟春嬌是班上的一對情侶，他們有寫交換日記來打發時間的習慣，為了防止他們寫的內容被幫忙傳的同學，或者是不小心被老師沒收，而曝光了裡面寫的東西，他們想到了一個辦法，就是把內容的所有字母都往後數幾次的字母替代，而往後數幾次的數目就寫在內容的下一行。但是，問題來了，春嬌覺得每次寫完都要在數來數去的轉化成”加密”格式，實在是太麻煩了。但又礙於不想被輕易的看到內容，於是她拜託你寫個程式幫忙她可以直接把寫好的內容轉化成”加密”的型態。加密結果不會影響原字母的大小寫，且數字部分亦作相同處理，但不處理符號及特殊字元及中文。

輸入說明

第一行為想輸入的內容，不超過 100 個字

第二行為打完你想輸入的內容之後，換行輸入你想要往後替代的數目。

輸出說明

印出轉換後的句子。

範例

Sample Input

Sample Output

How are you?

2

Jqy ctg aqw?



*/

