#include<stdio.h>
int main()
{
	int b[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a, i, j=0;

	scanf("%d", &a);
	printf("这是2016年%d月: \n", a);
	if(a<=0)
	{
		printf("chu cuo !!!");
	}

	else
	{
		for (i=1;i<=b[a-1]; i++ )
		{
			printf("%5d ",i);
			j++;
			if(0==j%7)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	
	return 0;
}
