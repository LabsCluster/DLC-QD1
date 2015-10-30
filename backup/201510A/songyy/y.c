#include<stdio.h>
int main()
{
int x,y;
scanf("%d" ,&x);
if(x<1)
{
	y=x;
}
if(x<10&&x>=1)
{
	y=2*x-1;
}
else
{
	 y=3*x-11;
}
printf("y=%d,x=%d\n",x,y);
return 0;


}

