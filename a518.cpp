#include <iostream>
using namespace std;

int main()
{
	int start,stop;
	int result;
	while(cin>>start)
	{
		cin>>stop;
		if (start==-1)
		{
			break;
		}
		if (stop>start)
		{
			result = stop-start;
		}
		if (start>stop)
		{
			result = start-stop;
		}
		if (start==stop)
		{
			result =0;
		}
		if (result>50)
		{
			result = 100-result;
		}
		cout<<result<<endl;

	}
}