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




*/

