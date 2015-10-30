#include<stdio.h>
int main()
{
		int m, n, a, b;

		scanf("%d%d ", &n, &m);

		a = (4*n-m)/2;
		b = n-a;

		if (m%2 == 1 | a < 0 | b < 0)
				printf("No answer!\n");
		else 
				printf("%d %d", a, b);

		return 0;
}

