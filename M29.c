#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{int a,b=0;
int cond=0;


while(scanf("%d",&a)!=EOF)
{
for(int i=a-1;i>=2;i--)
{//printf("%d\n",i);
for(int j=2;j<=i;j++)
{
if(i%j==0 && j!=i)
{break;
}

if(i%j==0 && j==i)
{b=j;
goto end;
}
}

}

end:
printf("%d\n",b);
cond=0;
}
return 0;
}




/*

最大質數問題
成績: 0 / 倒扣: 0.8
問題描述：
試撰寫一個程式，可輸入一個整數，並找出小於此數的最大質數。

輸入說明：
輸入一個正整數。

輸出說明：
輸出最大質數。
範例：

Sample Input:

Sample Output:

45
97
66

43
89
61


*/
