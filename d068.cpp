#include <iostream>
using namespace std;
int main()
{
	int weight;
	while(cin>>weight)
	{
		cout<<-(weight>50)+weight<<endl;
	}
}