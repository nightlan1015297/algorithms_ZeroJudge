#include <iostream>

using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{	
		int nm =0;
		int tmp;
		for(int i = 0;i<num;i++)
		{
			cin>>tmp;
			if (tmp>nm)
			{
				nm = tmp;
			}
		}
		cout<<nm<<endl;
	}
}