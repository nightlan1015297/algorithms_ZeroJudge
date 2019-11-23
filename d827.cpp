#include <iostream>

using namespace std;
int main()
{
	int num;
	while(cin>>num)
	{
		int ans;
		ans = (num/12)*50 + (num%12)*5;
		cout<<ans<<endl;

	}
}