#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int ios(int table[],int cnt,int num)
{

	int i=0;
	for (i = 0; i < cnt; ++i)  
{
if(table[i]==num)
{return 0;}




}        
			




return 1;

}



void BubbleSort(int arr[], int len) 
{
	int i, j, temp;
	for (i = 0; i < len - 1; ++i)          //循環N-1次
		for (j = 0; j < len - 1 - i; ++j)  //每次循環要比較的次數
			if (arr[j] > arr[j + 1])       //比大小後交換
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}


int main()
{
	int x=0,y=0,cnt=0,tmp=0;
    int *line=NULL;

scanf("%d",&cnt);
line=(int*)malloc(sizeof(int)*cnt*5);

if(cnt==1)
{printf("1\n");}
else
{line[0]=1;
x=0;
y=1;
for(;y<cnt*5;)
{
tmp=(line[x]*2)+1;
if(ios(line,y,tmp))
{line[y]=tmp;
y++;}
if(y>=cnt*5)
{break;}
tmp=(line[x]*3)+1;
if(ios(line,y,tmp))
{line[y]=tmp;
y++;}
if(y>=cnt*5)
{break;}

BubbleSort(line,y);
x++;
}
BubbleSort(line,y);
//printf("%d",line[0]);
for(int i=0;i<cnt;i++)
{
printf("%d\n",line[i]);
}
//printf("\n");



}
  return 0;
}





/*

產生集合元素
成績: 0 / 倒扣: 0.8
AR50.JPG

輸入說明：

我們的輸入只有一行，即為 N

輸出說明：

將 X 的前 N 項元素由小到大輸出。

最後一行需要換行。

範例：

 

Sample Input:

Sample Output:

50

1
3
4
7
9
10
13
15
19
21
22
27
28
31
39
40
43
45
46
55
57
58
63
64
67
79
81
82
85
87
91
93
94
111
115
117
118
121
127
129
130
135
136
139
159
163
165
166
171
172


*/
