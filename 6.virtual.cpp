#include<iostream.h>
#include<conio.h>
class base
{
	public:
		int i;
		base(int x)
		{
			i=x;
		}
		virtual void function()
		{
			cout<<"\n Given number is:";
			cout<<i<<"\n";
		}
};
class derived1:public base
{
	public:
	derived1(int x):base(x){}
	void function()
	{
		cout<<"\n Addition ("<<i<<"+"<<i<<")=";
		cout<<i+i<<"\n";
	}
};
class derived2:public base
{
	public:
	derived2(int x):base(x){}
	void function()
	{
		cout<<"\n Subtraction ("<<i<<"-"<<i<<")=";
		cout<<i-i<<"\n";
	}
};
class derived3:public base
{
	public:
	derived3(int x):base(x){}
	void function()
	{
		cout<<"\n Multiplication ("<<i<<"x"<<i<<")=";
		cout<<i*i<<"\n";
	}
};
class derived4:public base
{
	public:
	derived4(int x):base(x){}
	void function()
	{
		cout<<"\n Division ("<<i<<"/"<<i<<")=";
		cout<<i/i<<"\n";
	}
};
void main()
{
base *p;
int num;
clrscr();
cout<<"\n Enter the number to perform arithmetic operations:";
cin>>num;
base obj(num);
derived1 obj1(num);
derived2 obj2(num);
derived3 obj3(num);
derived4 obj4(num);
p=&obj;
p->function();
p=&obj1;
p->function();
p=&obj2;
p->function();
p=&obj3;
p->function();
p=&obj4;
p->function();
getch();
}
