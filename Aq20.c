#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void ios(char line[],int table[],int cnt)
{


}

int main()
{
	int a,str;
    char line[1000];
    int table[128]={};

scanf("%d",&a);

for(int i=0;i<128;i++)
{table[i]=-1;}

scanf("%d",&str);
table[str-1]=str;
a--;

while(a!=0)
{
scanf(" %d",&str);
if(table[str-1]<0)
{
table[str-1]=str;
}
else
{printf("0\n");
goto end;}


a--;
}

printf("1\n");

  end:
  return 0;
}





/*


檢查數值是否有重複
成績: 0 / 倒扣: 0.8
問題描述 ：

給予一個由1到N的所有整數構成的數列，不依大小排列。 寫一函數檢查此數列是否每個數值只出現一次。

輸入說明 ：

輸入分為兩行，第一行是一個介於1與128間的正整數，代表第二行中數列中的數字個數。

第二行是由空白鍵分隔開的數字序列，不超過128個數。每一個數值介於1到序列數字個數的整數。

輸出說明 ：

若是每個數字剛好只出現一次則輸出1，輸出0表示其中有重複的數字。

範例 ：

Sample Input:

Sample Output:

8
1 4 6 2 3 5 8 7

1

*/
