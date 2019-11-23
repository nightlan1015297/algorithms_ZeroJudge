#include <iostream>

using namespace std;
int main()
{
	int hour;
	while(cin>>hour)
	{	
		int min; 
		cin>>min;
		if (8<=hour&&hour<=16)
		{
			cout<<"At School"<<endl;
		}
		else if(hour==7&&min>=30)
		{
			cout<<"At School"<<endl;
		}
		else
		{
			cout<<"Off School"<<endl;
		}
	}
}