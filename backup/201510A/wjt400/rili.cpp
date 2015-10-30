#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
		int month[]={31,28,31,30,31,30,31,31,30,31,30,31}; //每月有多少天
		int y,m,d; //今天的日期
		int i;
		i=0;
		y=2015;
		m=10;
		d=26;

		cout<<"请输入过了几天:"<<endl;
		cin>>i;
		//cout<<*argv[1]<<endl;
		cout<<"过了"<<i<<"天后是:"<<endl;
		
		if(i<=0)
		{
				cout<<"输入错误"<<endl;
				return 1;
		} //处理异常

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

				if(d<month[m-1]) //判断当天是不是月底
				{
						d++;
						i--;
				}
				else
				{
						m++;
						d=1;
						i--;
				}

				if(m==13)
				{
						m=1;
						y++;
				}
		}

		cout<<y<<"年"<<m<<"月"<<d<<"日"<<endl;

		return 0;
}
