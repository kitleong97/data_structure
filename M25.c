#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{int a,b,c=0;




while(scanf("%d",&a)!=EOF)
{

for(int i=1;i<=a;i++)
{
if(i%3==0)
{b=i;
c+=b;}


}



printf("%d\n",c);



c=0;


}
return 0;
}




/*

計算正整數被3整除之數值之總和
成績: 0 / 倒扣: 0.8
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。

範例：

輸入範例:

輸出範例:

100
150

1683
3825


*/
