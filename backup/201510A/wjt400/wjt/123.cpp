#include<stdio.h>
int main()
{
	int y,m,d,i,w;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	y=2015;
	m=10;
	d=28;
	printf("请输入一个天数：");
	scanf("%d",&i);
	w=(i+3)%7;
	while(i>0)
	{
		if(y%4==0&&y%100!=0)
		{
			a[1]=29;
		}
		else
		{
			a[1]=28;
		}
		if(d<a[m-1])
		{
			d++;
			i--;
		}
		else
		{
			m++;
			i--;
			d=1;
		}
		if(m==13)
		{
			y++;
			m=1;
		}
	}
	    printf("这一天的日期是：");
    	printf("%d年%d月%d日",y,m,d);
		switch(w)
		{
			case 1:printf("星期一");break;
			case 2:printf("星期二");break;
			case 3:printf("星期三");break;
			case 4:printf("星期四");break;
			case 5:printf("星期五");break;
			case 6:printf("星期六");break;
			case 0:printf("星期日");break;
		}
	 return 0;
	
}

