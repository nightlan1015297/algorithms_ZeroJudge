#include <iostream>

using namespace std;

int print(int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<"_";
	}
	return 0;
}
int print1(int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<"*";
	}
	return 0;
}
int main()
{
	int num;
	while(cin>>num)
	{
		for(int J=0;J<num;J++)
		{
			print(num-J-1);
			print1((J+1)*2-1);
			print(num-J-1);
			cout<<endl;
		}
	}
}