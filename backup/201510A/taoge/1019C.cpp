#include<stdio.h>
int main()
{
	int max(int,int);
	int a,b,c,e,f;
	scanf("a=%d,b=%d,c=%d",&a,&b,&c);
	e=a+b+c;
	f=max(a,b);
	f=max(f,c);
	printf("%d\n",e);
	printf("max=%d\n",f);
	return 0;
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
	return a;
}

