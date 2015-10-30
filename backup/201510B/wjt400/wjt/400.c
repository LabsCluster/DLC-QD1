#include<stdio.h>
int main()
{
int a,b,c,x;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
   x=a;
else
  x=b;
  if(c>x)
printf("%d",c);
  else
printf("%d",x);
printf("sum=%d",a+b+c);
return 0;
}

