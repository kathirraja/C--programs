#include<iostream.h>
#include<conio.h>
template<class z>
void swapargs(z &a,z &b)
{
z temp;
temp=a;
a=b;
b=temp;
}
void main()
{
int i,j;
char a,b;
float x,y;
clrscr();
cout<<"\n Enter the inter values for i & j:";
cin>>i>>j;
cout<<"\n Enter the character values for a & b:";
cin>>a>>b;
cout<<"\n Enter the float values for x & y:";
cin>>x>>y;
cout<<"\nOriginal values :";
cout<<"\nOriginal value of i and j:"<<i<<","<<j<<endl;
cout<<"\nOriginal value of a and b:"<<a<<","<<b<<endl;
cout<<"\nOriginal value of x and y:"<<x<<","<<y<<endl;
swapargs(i,j);
swapargs(a,b);
swapargs(x,y);
cout<<"\nSwapped values :";
cout<<"\nSwapped value of i and j:"<<i<<","<<j<<endl;
cout<<"\nSwapped value of a and b:"<<a<<","<<b<<endl;
cout<<"\nSwapped value of x and y:"<<x<<","<<y<<endl;
getch();
}
