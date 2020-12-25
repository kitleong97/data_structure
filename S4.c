#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{int a,length;
char line[1000];
scanf("%c",&a)
while(a)
{fgets(line,1000,stdin);

length=strlen(line);
for(int i=length-2;i>=0;i--)
{
printf("%c",line[i]);

}
printf("\n");
a--;
}

return 0;
}

/*

字元符號轉換成標準萬國碼

問題描述：
請撰寫一個程式，將字元符號轉換成標準萬國碼。

輸入說明：
輸入一個字元。

輸出說明：
輸出標準萬國碼。

範例：

輸入範例:

輸出範例:

‘
Q

39
81
*/

