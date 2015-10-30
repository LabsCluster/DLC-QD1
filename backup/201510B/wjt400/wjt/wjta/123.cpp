#include<stdio.h>
int main()
{
	int s,w1,w2,i;
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&s);
	w1=s%4;
	w2=s%400;
	if(w1==0&&w2!=0)
	{
		for(i=0;i<12;i++)
		{
			printf("%d\n",b[i]);
		}

	}	
	else
	{
		for(i=0;i<12;i++)
		{
			printf("%d\n",a[i]);
		}
	}	
	return 0;
}
	

