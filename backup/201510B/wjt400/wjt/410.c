#include<stdio.h>
int main()
{
long n,s,w,d,x,f,h,c,m;
scanf("%d",&n);
s=n/10000;
printf("万位是：%d\n",s);
w=n%10000;
d=w/1000;
printf("千位是：%d\n",d);
x=w%1000;
f=x/100;
printf("百位是：%d\n",f);
h=x%100;
c=h/10;
printf("十位是：%d\n",c);
m=h%10;
printf("个位是：%d\n",m);
return 0;
}

