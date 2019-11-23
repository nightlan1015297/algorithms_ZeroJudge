#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int index;
	int result;
	while(cin>>index)
	{
		result = pow(2,index-3)+1;
		cout<<result;
	}	
}