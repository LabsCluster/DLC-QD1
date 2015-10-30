#include<stdio.h>
int main()
 {
int a,b,c,sum,max;
printf("请用a=?b=?c=?的格式输入三个整数\n");
scanf("a=%db=%dc=%d",&a,&b,&c);
sum=a+b+c;
printf("sum=%d\n",sum);
if(a>b)
{
max=a;
}
else
{
max=b;
}
if(c>max)
{
max=c;
}
printf("最大的数为%d\n",max);
return 0;
}
