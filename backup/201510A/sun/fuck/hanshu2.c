#include <stdio.h>
int main()
{

	int score[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
	int search(int (*p)[4], int n);
	int k,i;
	int (*p)[4];

	p = score;

	search(p, 3);

	return 0;
}

int search (int (*p)[4], int n)
{
		int *pt, j, i, m;
		for (j = 0; j < 3;j++ )
		{
				for (i = 0; i < 4; i++)
				{
						if (*(*(p + j) + i) <= 22)
						{
								for (m = 0; m < 4; m++)
								{
										printf("%d", *(*(p + j) + m));
								}
						}
				}
		}

		return 0;
}
