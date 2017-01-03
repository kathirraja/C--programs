#include<iostream.h>
#include<conio.h>
class complex
{
 	int real,img;
 public:
       complex()
       {
		real=0;
		img=0;
       }
       complex operator +(complex c2)
       {
		complex c;
		c.real=real+c2.real;
		c.img=img+c2.img;
		return c;
       }
       void read()
       {
		cout<<"\n ENTER THE REAL AND THE IMAGINARY PART:";
		cin>>real>>img;
       }
       void print()
       {
		cout<<real<<"+"<<img<<"i"<<"\n";
       }
};
void main()
{
 	clrscr();
 	complex c1,c2,c3;
 	c1.read();
 	c2.read();
 	c3=c1+c2;
 	cout<<"\n\n";
 	cout<<"The Complex Number of C1: ";
 	c1.print();
 	cout<<"\n\nThe Complex Number of C2: ";
 	c2.print();
 	cout<<"\n\n THE ADDITION IS:";
 	c3.print();
 	getch();
} 
