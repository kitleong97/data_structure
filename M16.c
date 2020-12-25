#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>




int main()
{double distance;
double a,b;



while(scanf("%lf %lf",&a,&b)!=EOF)
{

distance=a*a+b*b;



if(distance<=100*100)
{printf("inside\n");}
else
{printf("outside\n");}


}




return 0;
}




/*


判斷座標是否在圓形的範圍內
成績: 0 / 倒扣: 0.8
※教學影音※判斷座標是否在圓形的範圍內​

問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。

picture01

輸入說明：
輸入一整數座標，依序分別X與Y。

輸出說明：
輸出此座標位置在圓內或圓外訊息。

範例：

 

輸入範例:

輸出範例:

50 50
200 200

inside
outside

*/
