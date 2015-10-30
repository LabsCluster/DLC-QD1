#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	srand((int)time(0));
	int i,j;
	for(i=0; i<10; i++)
	{
		j=1+(10000*rand()/RAND_MAX+1.0);
		printf("%d\n",j);
	}

	return 0;
}
