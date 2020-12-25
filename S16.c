#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main()
{char line[100];

while(scanf("%s",line)!=EOF)
{printf("%c",line[0]);
for(int i=1;i<5;i++)
{
printf("   %c",line[i]);
}
printf("\n");
}

return 0;
}

/*
將五位數數字分別印出
成績: 0 / 倒扣: 0.8
問題描述：
撰寫一個程式，輸入一個五位數的數字，將這個數字分成個別的數字，然後分別印出每個數字，數字中間必須相隔 3 個空格。若輸入 42139 ，則程式必須印出： 4 2 1 3 9 。

輸入說明：
輸入一個正整數。

輸出說明：
輸出樣式如範例。
範例：

Sample Input:

Sample Output:

42139
12345

4   2   1   3   9
1   2   3   4   5

*/
