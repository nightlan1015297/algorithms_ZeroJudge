#include <iostream>
using namespace std;

int main()
{
	string str;
	int counter=0;
	while(cin>>str)
	{
		bool out =0;
		if (str=="#")
		{
			break;
		}
		counter++;

		if (str=="BONJOUR")
		{
			cout<<"Case "<<counter<<": "<<"FRENCH"<<endl;
			out =1;
		}
		if (str=="CIAO")
		{
			cout<<"Case "<<counter<<": "<<"ITALIAN"<<endl;
			out =1;
		}
		if (str=="ZDRAVSTVUJTE")
		{
			cout<<"Case "<<counter<<": "<<"RUSSIAN"<<endl;
			out =1;
		}
		if (str=="HELLO")
		{
			cout<<"Case "<<counter<<": "<<"ENGLISH"<<endl;
			out =1;
		}
		if (str=="HOLA")
		{
			cout<<"Case "<<counter<<": "<<"SPANISH"<<endl;
			out =1;
		}
		if (str=="HALLO")
		{
			cout<<"Case "<<counter<<": "<<"GERMAN"<<endl;
			out =1;
		}
		if (out==0)
		{
			cout<<"Case "<<counter<<": "<<"UNKNOWN"<<endl;
		}
	}
}