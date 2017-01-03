#include<iostream>
using namespace std;
class A
{
	private:
		int count;
		friend class B;
	public:
		A()
		{
			count=0;
		}
};
class B
{
	public:
	void prime(int n)
	{
		A obj;
		int i;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			obj.count++;
		}
		if(obj.count==0)
			cout<<"\n Prime Number";
		else
			cout<<"\n Not prime";
	}
};
int main()
{
	    int num;
	    B obj1;
	    cout<<"\n Enter the number:";
	    cin>>num;
	    obj1.prime(num);
	    return 0;
}
