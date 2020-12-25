#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{int line[6]={};
long long int ans=0;

while(scanf("%d %d %d %d %d %d",&line[0],&line[1],&line[2],&line[3],&line[4],&line[5])!=EOF)
{

ans+=line[0]*line[0]*line[0];
ans+=line[1]*line[1]*line[1];
ans+=line[2]*line[2]*line[2];
ans+=line[3]*line[3]*line[3];
ans+=line[4]*line[4]*line[4];
ans+=line[5]*line[5]*line[5];


printf("%lld\n",ans);
ans=0;
}

return 0;
}



/*

計算陣列中所有元素的立方和
成績: 5 / 倒扣: 0.8
問題描述：
試撰寫一個程式，宣告一個 1 維的整數陣列，並計算元素中所有元素的立方和。

輸入說明：
任意輸入六個整數。

輸出說明：
輸出所有元素的立方和。
範例：

Sample Input:

Sample Output:

30 20 10 5 34 44

160613


*/

