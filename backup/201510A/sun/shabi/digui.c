#include <stdio.h>
int main()
{
		int a = 1,b;
		int f(int begin, int end);
		
		f(1, 9);

		return 0;
}

int f(int begin, int end)
{
		if(begin > end)
		{
				return 0;
		}
		
	printf("%d\n", begin);
		begin++;
		f(begin, end);	
		return 0;
}

