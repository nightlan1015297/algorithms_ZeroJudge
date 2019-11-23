#include <iostream>
using namespace std;
int main ()
{
	int data_amount;
	cin>>data_amount;
	double amount_in;
	double amount_out;
	for (int i=0;i<data_amount;i++)
	{
		cin>>amount_in;
		cin>>amount_out;
		double rate = ((amount_out-amount_in)/amount_in)*100;
		if (rate<-7.00 || rate>=10.00)
		{
			
			printf("%.2f",rate);
			cout<<"\% dispose"<<endl;
		}	
		else 
		{
			printf("%.2f",rate);
			cout<<"\% keep"<<endl;
		}

	}
}