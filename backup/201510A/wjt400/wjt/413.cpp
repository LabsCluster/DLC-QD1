#include<stdio.h>
#include<math.h>
int main()
{
	double c1,s,c2,pi;
	scanf("%lf",&c1);
	pi=3.14;
	c2=c1*(pi/180);
	s=sin(c2);
	printf("%.2f\n",s);
	return 0;
}

