#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> myvec;
	myvec.clear();
	myvec = {1,2,3,5,6,7,8,9,10};
	vector<int>::iterator iter;
	int a = myvec.size();
	cout<<"*"*2<<endl;

}	