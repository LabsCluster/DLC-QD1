#include <stdio.h>
int main()
{
		int sum(int a[], int end,int n);
		int a[5] = {1,2,3,4,5};

		sum(a[0], a[4], 5);

		printf("%d\n", sum);

		return 0;
}

int sum(int a[] ,int end, int n)
{
		int i = 0;

		for(i = 0; i <= 5, i++)
		{


