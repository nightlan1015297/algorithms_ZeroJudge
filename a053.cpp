#include <iostream>
using namespace std;
int main()
{
	short int num;
	while(cin>>num)
	{
		if(num<=10)
		{
			cout<<num*6<<endl;
		}
		else if(10<num && num<=20)
		{
			cout<<60+(num-10)*2<<endl;
		}
		else if(20<num && num<=40)
		{
			cout<<80+num-20<<endl;
		}
		else 
		{
			cout<<100<<endl;
		}
	}
}