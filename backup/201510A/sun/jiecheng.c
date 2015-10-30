#include<stdio.h>
int main()
{
	int a, sum=1;
	printf("15的阶乘：\n");
	for (a=15; a>=1; a--)
	{
		sum = sum*a;
	}
	
	printf("%d\n", sum);

	return 0;
}
