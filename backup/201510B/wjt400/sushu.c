//author=DGideas(王万霖)
#include<stdio.h>
int main()
{
	int n=10; //要判断的数，素数只能被1和它本身整除
	int c=2; //除数，通过余数来判断是否能整除，底下会用到
	int stat=1; //状态，对于每个数来说，1为素数，0为非素数。
	while(n<=100)
	{
		stat=1; //我们先假设每个数为素数
		c=2; //对于每个数，都先从2开始尝试除
		while(c<n)
		{
			if(n%c==0) //如果能被整除
			{
				stat=0; //将该数设为非素数
				break; //已经知道不是素数了，不需要继续拿别的数来试了
			}
			c++;
		}
		if(stat==1) //如果把所有的数试过一遍，还是素数
		{
			printf("%d\n",n);
		}
		n++;
	}
i	return 0;
}
