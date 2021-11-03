#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
 
int lcm(int a, int b)
{
    return a*b/gcd(a, b);
}

int main() 
{
	int c,d;
	cout<<"adad aval ra vared konid: ";
	cin>>c;
	cout<<"\n"<<"adad dovom ra vared konid: ";
	cin>>d;
	
	cout<<"\n"<<"kmm = "<<lcm(c,d);
	return 0;
}