#include<iostream.h>
#include<conio.h>
 class UnaryOp
{
    public:
    int x,y,z;
 
    UnaryOp()
    {
        x=0;
        y=0;
        z=0;
    }
 
    UnaryOp(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
 
    void display()
    {
        cout<<"\n\n\t"<<x<<"  "<<y<<"    "<<z;
    }
 
    // Overloaded minus (-) operator
    UnaryOp operator- ()
    {
        x= -x;
        y= -y;
        z= -z;
    }
};
 
int main()
{
    int a,b,c;
    clrscr();
    cout<"Enter 3 values:";
    cin>>a>>b>>c;
 
    UnaryOp u1(a,b,c);
 
    cout<<"\n\nNumbers are :::\n";
 
    u1.display();
 
    -u1;           // call unary minus operator function
 
    cout<<"\n\nNumbers are after applying overloaded minus (-) operator :::\n";
 
    u1.display();  // display u1
    getch();
}

