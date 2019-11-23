#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int min,max;
	int result;
	int data_amount;
	while(cin>>data_amount)
	{
		for(int time=0;time<data_amount;time++)
		{
			result=0;
			cin>>min;
			cin>>max;
			int base = sqrt(min);
			if (base*base<min)
			{
				base++;
			}
			for(int num=base;num*num<=max;num++)
			{
				result+=num*num;
			}
			cout<<"Case "<<time+1<<": "<<result<<endl;
		}
	}
}