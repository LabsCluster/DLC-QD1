#include<stdio.h>
#include<math.h>
int main()
{float a,b,c;
printf("请输入一个角度值：\n");
scanf("%f",&a);
b=3.14159;
c=sin(b/180*a);
printf("这个角度的正弦值是c=%f\n",c);
return 0;}
