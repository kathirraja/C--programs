#include<iostream.h>
#include<conio.h>
template<class T>
class compare
{
	T a,b;
	public:
	compare(T first, T second)
	{
		a=first;
		b=second;
	}
	T max();
};
template <class T>
T compare<T>::max()
{
	T val;
	if(a>b)
		val=a;
	else
		val=b;
	return val;
}

void main()
{
	int x,y;
	char r,s;
	clrscr();
	cout<<"\n Enter any two integers:";
	cin>>x>>y;c
	cout<<"\n enter any two characters:";
	cin>>r>>s;
	compare<int>obj1(x,y);
	compare<char>obj2(r,s);
	cout<<"\n Maximum integer is:"<<obj1.max();
	cout<<"\n Maximum character is:"<<obj2.max();
	getch();
}