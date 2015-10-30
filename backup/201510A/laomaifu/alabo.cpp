#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char *chinese[10]={"零","一","二",
		"三","四","五","六","七",
		"八","九"};
	int a;
	cout<<"请输入数字:";
	cin>>a;
	//a=a-48;
	cout<<chinese[a]<<endl;
	return 0;
}
