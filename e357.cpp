#include <iostream>
using namespace std;

int Function(int x)
{
    if (x==1)
    {
        return 1;
    }
    else if(x%2==0)
    {
        return Function(x/2);
    }
    else
    {
        return Function(x-1)+Function(x+1);
    }
}





int main()
{
    int input;
    while(cin>>input)
    {
        cout<<Function(input)<<endl;
    }
}