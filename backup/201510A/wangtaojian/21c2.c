#include<stdio.h>
int main()
{char c1,c2;
printf("请输入一个小写字母：");
scanf("%c",&c1);
c2=c1-32;
printf("这个大写字母是：%c",c2);
return 0;
}
