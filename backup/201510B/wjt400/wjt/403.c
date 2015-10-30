#include<stdio.h>
#include<math.h>
int main()
{
	int n,w1,w2;
	for(n=1900;n<=2015;n++)
	{
		
			w1=n%4;
			w2=n%400;
		
		if(w1==0&&w2!=0)
			printf("%d\n",n);
		else
			printf("This is not a leap year!\n");
	}
	return 0;
}

