#include <stdio.h>//大傻逼！！！
int main()
{
		double sum = 0;
		int i;

		for (i = 0;  ; i++)
		{
				double term;

				term = 1.0/(i*2+1);
				
				if (0 == i%2) //判断term符号。
				{
				sum = sum + term;
				}
				else
				{
				sum = sum - term;
				}

				if(term < 1e-6) break;
		}

				printf("%.6f\n", sum);

				return 0;
}

