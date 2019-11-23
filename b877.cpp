#include <iostream>
using namespace std;

int main ()
{
	int start;
	int stop;
	cin>>start>>stop;
	int ans;
	ans =(100+stop-start)%100;
	cout<<ans<<endl;
}