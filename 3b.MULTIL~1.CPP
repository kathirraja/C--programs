#include<iostream.h>
#include<conio.h>

//base class
class top
 {
 public :
 int a;
 void getdata()
 {
 cout << "\n\nEnter the Value :\t";
 cin >> a;
 }
 };
//First level inheritance
// class middle is derived_1
class middle : public top
 {
 public:
 int b;
 void square()
 {
 getdata();
 b = a * a;
 cout << "\n\nSquare Is :" << b;
 }
 };
//Second level inheritance
// class bottom is derived_2
class bottom : public middle
 {
 public:
 int c;
 void cube()
 {
 square();
 c = b * a;
 cout << "\n\nCube :\t" << c;
 }
 };
void main()
{
 bottom b1;
 b1.cube();
 getch();
}

#include<iostream.h>
#include<conio.h>

//base class
class top
 {
 public :
 int a;
 void getdata()
 {
 cout << "\n\nEnter the Value :\t";
 cin >> a;
 }
 };
//First level inheritance
// class middle is derived_1
class middle : public top
 {
 public:
 int b;
 void square()
 {
 getdata();
 b = a * a;
 cout << "\n\nSquare Is :" << b;
 }
 };
//Second level inheritance
// class bottom is derived_2
class bottom : public middle
 {
 public:
 int c;
 void cube()
 {
 square();
 c = b * a;
 cout << "\n\nCube :\t" << c;
 }
 };
void main()
{
 bottom b1;
 b1.cube();
 getch();
}

#include<iostream.h>
#include<conio.h>

//base class
class top
 {
 public :
 int a;
 void getdata()
 {
 cout << "\n\nEnter the Value :\t";
 cin >> a;
 }
 };
//First level inheritance
// class middle is derived_1
class middle : public top
 {
 public:
 int b;
 void square()
 {
 getdata();
 b = a * a;
 cout << "\n\nSquare Is :" << b;
 }
 };
//Second level inheritance
// class bottom is derived_2
class bottom : public middle
 {
 public:
 int c;
 void cube()
 {
 square();
 c = b * a;
 cout << "\n\nCube :\t" << c;
 }
 };
void main()
{
 bottom b1;
 b1.cube();
 getch();
}

 getdata()
 {
 cout << "\n\nEnter the Value :\t";
 cin >> a;
 }
 };
//First level inheritance
// class middle is derived_1
class middle : public top
 {
 public:
 int b;
 void square()
 {
 getdata();
 b = a * a;
 cout << "\n\nSquare Is :" << b;
 }
 };
//Second level inheritance
// class bottom is derived_2
class bottom : public middle
 {
 public:
 int c;
 void cube()
 {
 square();
 c = b * a;
 cout << "\n\nCube :\t" << c;
 }
 };
void main()
{
 bottom b1;
 b1.cube();
 getch();
}

