#include<stdio.h>
#include<math.h>
int main()
{
double sum,i=1,h=0;
while(i<3)
{sum=1/i*i*i;
h=h+sum;
i=i+1;
}
printf("the result is %lf\n",h);
return 0;
}

