#include<stdio.h>
int main()
{
		int j, i, sum = 0, fac = 1, n;//factorial阶乘

		scanf("%d", &n);

		for(j = 1; j <= n; j++)
		{
				for(i = 1; i <= j; i++)
				{
						fac = fac*i;
				}
		sum = sum + fac;

		fac = 1;
		}

		printf("%d\n", sum);

		return 0;
}
