#include <iostream>
using namespace std;


int main() 
{
    int n;
    int sum = 1;
    cout << "enter number: ";
    cin >> n;
    for (int i = 1; sum<n ; ++i)
        {
        		sum=sum*i;
		}
   		 if (sum == n)
	        cout << "factorial number";
	    else
	        cout << "Not foctrial number ";
    return 0;
}