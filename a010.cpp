#include <iostream>

using namespace std;


int main ()
{
	int num ;
	while(cin>>num)
	{
		bool flag =true;
		int buttom = 2;
		int count =0;
		while (num!=1){
		while (num%buttom==0)
		{
			num =num/buttom;
			count++;
		}
		if (count>0&&flag==true)
		{
			if (count==1)
			{
				cout<<buttom;
			}	
			else
			{
				cout<<buttom<<"^"<<count;
			}
			flag = false;
		}
		else if (count>0)
		{
			if (count==1)
			{
				cout<<" * "<<buttom;
			}
			if (count>1)
			{
				cout<<" * "<<buttom<<"^"<<count;
			}
		}
		buttom++;
		count = 0;}
		cout<<endl;
	}
}