#include<stdio.h>
int main()
{
	int n,m,w;
	for(n=1;n<=100;n++)
	{
		m=2;
		while(m<n)
		{
			w=n%m;
			if(w==0)
			{
				break;
			}
		m++;
		}
		if(w!=0)
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
