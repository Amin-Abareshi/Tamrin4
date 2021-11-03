#include<iostream>
using namespace std;
 
int main()
{
		int a,b,max,min,c=1;
		cout<<"number1=  ";
		cin>>a;
		cout<<"number2=  ";
		cin>>b;
		max=a;
		min=b;
		while(c!=0)
		{
			c=(max%min);
			max=min;
			min=c;
		}
		cout<<"b.m.m is:"<<max;
		return 0;
}