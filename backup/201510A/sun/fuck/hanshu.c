#include <stdio.h>
int main()
{
				int score[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
		int *search (int (*p)[4], int n);
		int k,i;
		int *p;
		
		scanf("%d", &k);

		p = search (score, k);

		for (i = 0; i < 4; i++)
		{
				printf("%d", *(p + i));
		}

		*p = '\0';

		return 0;

}

int *search(int (*p)[4], int n)
{
		int *pt;

		pt = *(p + n);
		return pt;
}
