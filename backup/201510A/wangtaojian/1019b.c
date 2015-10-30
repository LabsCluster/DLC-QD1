#include<stdio.h>
int main()
{int i=1900;
while(i<2016)
{if(i%4==0||i%100==0||i%400==0)
printf("year=%d\n",i);
i++;}
return 0;}
