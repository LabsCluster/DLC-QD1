#include<stdio.h>
int main()
{
long a,b,c;
printf("请输入一个整数：");
scanf("%ld",&a);
b=a*a;
c=a*a*a;
printf("这个数的平方b=%ld\n",b);
printf("这个数的立方c=%ld\n",c);
return 0;
}
