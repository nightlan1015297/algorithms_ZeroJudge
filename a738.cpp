#include<iostream>

using namespace std;

int GCD(int max , int min)
{
	int nextmin = max%min;
	int nextmax = min;
	if (nextmin==0)
	{
		return nextmax;
	}
	else
	{
		GCD(nextmax,nextmin);
	}

}

int main()
{
	int x;
	int y;
	while(cin>>x)
	{
		cin>>y;
		if (x<y)
		{
			int tmp;
			tmp = x;
			x = y;
			y = tmp;
		}	
		int result = GCD(x,y);
		cout<<result<<endl;
	}
}