#include<stdio.h>
#include<math.h>
int main()
{double a,rad;
printf("请输入一个角度值：");
scanf("%lf",&a);
double pi=3.14;
rad=a/180*pi;
printf("对应弧度值为：");
printf("%f\n",rad);
return 0;
}

