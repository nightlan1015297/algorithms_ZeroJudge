#include <iostream>

using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{	
		if (num%3==0)
		{
			cout<<num/3<<endl;
		}
		else
		{
			cout<<num/3+1<<endl;
		}
	}
}