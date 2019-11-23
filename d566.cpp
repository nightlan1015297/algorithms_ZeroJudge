#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> names;
	vector<string> ACnames;
	string name;
	string status;
	int data_amount;
	double counter;
	double ACcounter;
	double result;
	while(cin>>data_amount)
	{
		counter=0.0;
		ACcounter=0.0;
		
		for(int i=0;i<data_amount;i++)
		{
			cin>>name;
			cin>>status;
			vector<string>::iterator p;
			vector<string>::iterator j;
			if (status=="AC")
			{
				j = find(ACnames.begin(),ACnames.end(),name);
				if(j == ACnames.end())
				{
					ACnames.push_back(name);
					ACcounter++;
				}
			}
			p = find(names.begin(),names.end(),name);
			if (p == names.end())
			{
				names.push_back(name);
				if (status=="AC")
				{
					counter++;
				}
			}			
		}
		result = (counter/ACcounter)*100;
		printf("%.0f",result);
		cout<<"%"<<endl;
	}	
}