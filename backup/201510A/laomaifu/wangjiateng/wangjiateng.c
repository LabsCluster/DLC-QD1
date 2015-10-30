#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("请输入一个五位数\n");
	scanf("%d",&a);
	if(a>=10000&&a<=99999)
	{
		b=a/10000;
		c=(a-10000*b)/1000;
		d=(a-10000*b-1000*c)/100;
		e=(a-10000*b-1000*c-100*d)/10;
		f=a-10000*b-1000*c-100*d-10*e;
		printf("万位是%d\n千位是%d\n",b,c);
		printf("百位是%d\n十位是%d\n个位是%d\n",d,e,f);
	}
	else
	{
		printf("艹，你个倒霉孩子识数吗，这TM是五位数？！\n");
	}
	return 0;
}
