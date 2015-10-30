#include <stdio.h>
#include <math.h>
int main()
{		int i, j, m, n;
		for (j=1; j<=9; j++)
		{
				for (i=1; i<=9; i++)
				{
						m = 1100*j + 11*i;

				}
		}
		n = floor (sqrt(m) +0.5 );

		if (n*n == m) printf("%d\n", n);

		return 0;
}


