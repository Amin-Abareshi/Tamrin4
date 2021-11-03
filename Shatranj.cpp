#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"number 1: ";
	cin >> x;
	cout<<endl<<"number2: ";
	cin>>y;
	for(int i=1;i<=x;i++)
	{  
	  cout<<endl;
		for(int j=1;j<=y;j++)
		{
		
			if(j%2!=0)
			cout<<"#";
			else if(j%2==0)
			cout<<"*";
		}
	}
	return 0;
}