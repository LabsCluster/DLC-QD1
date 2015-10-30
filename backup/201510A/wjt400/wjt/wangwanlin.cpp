#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y=2015;
	int m=10;
	int d=28;
	int i;
	cout<<"请输入一个日子:"<<endl;
	cin>>i;
	cout<<i<<"天后是:"<<endl;
	while(i>0)
	{
		if(y%4==0 && y%400!=0)
		{
			month[1]=29;
		}
		else
		{
			month[1]=28;
		}
		
		if(d<month[m-1])
		{
			d++;
			i--;
		}
		else
		{
			m++;
			i--;
			d=1;
		}

		if(m==13)
		{
			y++;
			m=1;
		}
	}
	cout<<"那一天是:"<<y<<" "<<m<<" "<<d<<" "<<endl;
	return 0;
}
