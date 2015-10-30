#include <stdio.h>
int main()
{
		int m, count = 0;

		scanf("%d", &m);

		while (m > 1)
		{
				if (1 == m%2) m = 3*m+1;
				else m = m/2;

				count = count +1;
		}

		printf("%d\n", count);

		return 0;

}

