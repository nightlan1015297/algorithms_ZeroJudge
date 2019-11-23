#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a)
	{
		cin>>b;
		cin>>c;
		int S = (a+b+c)/2;
		int Tri = S*(S-a)*(S-b)*(S-c);
		cout<<Tri<<endl;
	}
}