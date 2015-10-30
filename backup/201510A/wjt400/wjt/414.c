#include<stdio.h>
int main()
{
	int s,i;
	s=0;
	for(i=1;i<=1051;i=i+2)
	{
		s=s+i;
	}
	printf("%d",s);
	return 0;
}
