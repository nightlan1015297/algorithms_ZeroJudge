#include <iostream>

using namespace std;


int main()
{
	int num;
	while(cin>>num)
	{
		int result = num*3;
		if (result%10!=0)
		{
			cout<<(result/10)+1<<endl;
		}
		else
		{
			cout<<result/10<<endl;
		}
	}

}