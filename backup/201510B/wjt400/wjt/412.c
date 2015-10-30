#include<stdio.h>
int main()
{   char c1;
	scanf("%c",&c1);
	if(c1>=65&&c1<=90)
	printf("这是一个大写字母！");
	else	
		if(c1>=97&&c1<=122)
		printf("这是一个小写字母！");
		return 0;
}
