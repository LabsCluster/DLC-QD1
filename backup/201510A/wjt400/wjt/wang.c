#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	for(n=1900;n<=2005;n++)
	{
		if(n%4==0 && n%400!=0)
		{
			printf("runnian:%d\n",n);
		}
	}
	return 0;
}

