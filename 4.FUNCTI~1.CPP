#include<iostream.h>
#include<conio.h>
class shape
 {
  int a,l,b,h;
  float r;
  public:
   void  volume(int);
   void volume(int,int,int);
   void volume(float,int);
  };
 void shape :: volume(int a)
  {
   cout<<"Volume of the cube is:"<<a*a*a;
  }
 void shape :: volume(int l,int b,int h)
  {
   cout<<"Volume of the rectangle is :"<<l*b*h;
ff  }
 void shape :: volume(float r,int h)
  {
   cout<<"Volume of the cylinder is:"<<0.33*3.14*r*r*h;
  }
 void main()
  {
   shape s;
   int a1,l1,b1,h1,h2;
   float r1;
   clrscr();
   cout<<"CUBE:"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"Enter the value of a:";
   cin>>a1;
   s.volume(a1);
   cout<<endl<<endl<<"RECTANGLE:"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"Enter the value of length, breadth and height:";
   cin>>l1>>b1>>h1;
   s.volume(l1,b1,h1);
   cout<<endl<<endl<<"CYLINDER"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"Enter the radius and height:";
   cin>>r1>>h2;
   s.volume(r1,h2);
   getch(); }
