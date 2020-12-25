#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct star
{int m1;
int d1;
int m2;
int d2;
char name[20];
};

int ios(char a,char b)
{int ten=0,one=0;
for(char i=48,j=0;i<=57;i++,j++)
{
if(i==a)
{ten=j*10;}
if(i==b)
{one=j;}

}
return ten+one;


}


int main()
{char a,b,c,d;
int day,month;

struct star table[12]={
{1,21,2,18,"Aquarius"},
{2,19,3,20,"Pisces"},
{3,21,4,20,"Aries"},
{4,21,5,21 ,"Taurus"},
{5,22,6,21,"Gemini"},
{6,22,7,22,"Cancer"},
{7,23,8,23,"Leo"},
{8,24,9,23,"Virgo"},
{9,24,10,23,"Libra"},
{10,24,11,22,"Scorpio"},
{11,23,12,21 ,"Sagittarius"},
{12,22,13,20,"Capricorn"}};

scanf("%c%c %c%c",&a,&b,&c,&d);
 
month=ios(a,b);
day=ios(c,d);
//printf("%d %d",month,day);

if(month==1&&day<=20)
{month+=12;}


for(int i=0;i<12;i++)
{
if(month==table[i].m1&&day>=table[i].d1)
{printf("%s\n",table[i].name);
break;
} 
if(month==table[i].m2&&day<=table[i].d2)
{printf("%s\n",table[i].name);
break;
} 
//printf("%d none\n",i);
//printf("%s %d %d %d %d\n",table[i].name,table[i].m1,table[i].d1,table[i].m2,table[i].d2);
}



 return 0;
}

/*
星座查詢
成績: 0 / 倒扣: 0.8
問題描述：

星座查詢有 " 水瓶 "," 雙魚 "," 牡羊 "," 金牛 " ," 雙子 "," 巨蟹 "," 獅子 "," 處女 " ," 天秤 "," 天蠍 "," 射手 "," 摩羯 "; 請設計程式，根據輸入之月及日期，輸出對應之星座輸出。

1997 年 1 月 21 日 1997 年 2 月 18 日 水瓶

1997 年 2 月 19 日 1997 年 3 月 20 日 雙魚

1997 年 3 月 21 日 1997 年 4 月 20 日 牡羊

1997 年 4 月 21 日 1997 年 5 月 21 日 金牛

1997 年 5 月 22 日 1997 年 6 月 21 日 雙子

1997 年 6 月 22 日 1997 年 7 月 22 日 巨蟹

1997 年 7 月 23 日 1997 年 8 月 23 日 獅子

1997 年 8 月 24 日 1997 年 9 月 23 日 處女

1997 年 9 月 24 日 1997 年 10 月 23 日 天秤

1997 年 10 月 24 日 1997 年 11 月 22 日 天蠍

1997 年 11 月 23 日 1997 年 12 月 21 日 射手

1997 年 12 月 22 日 1998 年 1 月 20 日 摩羯

Aquarius 水瓶座 Leo 獅子座

Pisces 雙魚座 Virgo 處女座 Aries 牡羊座 Libra 天秤座 Taurus 金牛座 Scorpio 天蠍座 Gemini 雙子座 Sagittarius 人馬座 Cancer 巨蠍座 Capricorn 山羊座
輸入說明：

請輸入月及日期。

輸出說明：

依照星座標準，將月及日期轉成星座輸出。

範例：

Sample Input

Sample Output

08 20

Leo

06 24

Cancer

03 13

Pisces


*/


