MULTIPLE INHERITANCE
#include<iostream.h>
#include<conio.h>
 class student
{
    protected:
       int rno,m1,m2;
    public:
                void get()
              {
                            cout<<"Enter the Roll no :";
                            cin>>rno;
                            cout<<"Enter the two marks   :";
                            cin>>m1>>m2;
              }
};
class sports
{
    protected:
       int sm;                   // sm = Sports mark
    public:
                void getsm()
              {
                 cout<<"\nEnter the sports mark :";
                 cin>>sm;
 
              }
};
class statement:public student,public sports
{
    int tot,avg;
    public:
    void display()
              {
                 tot=(m1+m2+sm);
                 avg=tot/3;
                 cout<<"\n\n\tRoll No    : "<<rno<<"\n\tTotal      : "<<tot;
               cout<<"\n\tAverage    : "<<avg;
              }
};
void main()
{
   clrscr();
   statement obj;
   obj.get();
   obj.getsm();
   obj.display();
   getch();
}


OUTPUT:

Enter  the  roll no:15

Enter   the  two marks:  54  65

Enter   the  sports  mark:  67

         Roll  no:  15

        Total:  186

        Average:  62

