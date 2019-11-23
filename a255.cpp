#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool foo(int a,int b)
{
    if (a%10==b%10)
    {
        return a>b;
    }
    else
    {
        return a%10<b%10;
    }
}

int main()
{
    int len;
    vector<int> vec ;
    while(cin>>len)
    {
        vec.clear();
        for(int i=0; i<len; i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end(),foo);

        for(int i:vec)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}