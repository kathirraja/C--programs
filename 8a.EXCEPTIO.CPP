#include<iostream>
#include<math.h>
using namespace std;
void mysqrt(double val)
{
	try
	{

		if(val<0.0)
			throw "Negative";
		else
			cout<<"The Square root of"<<val<<"is"<<sqrt(val)<<endl;
	}
	catch(char *str)
	{
		cout<<"Can not handle"<<str<<"number"<<endl;
	}
}
	int main()
{


	double num;
	cout<<"\n Enter a positive number:";
	cin>>num;
	mysqrt(num);
	return 0;
}
