#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> myvector;
    while(cin>>num)
    {
        myvector.clear();
        while(num>0)
        {
            int result = num%2;
            myvector.push_back(result);
            num = num/2;

        }
        for (int i=myvector.size()-1; i>=0; i--)
        {
            cout<<myvector.at(i);
        }
        cout<<endl;
    }
}