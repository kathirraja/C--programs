#include<iostream.h>
#include<conio.h>
class StackOperation
{
public:
char mStack[50];
int mTopOfStack;
StackOperation()
{
mTopOfStack = -1;
}
void Push ( char symbol )
{
if ( IsStackFull() )
{
cout << "\nStack overflow:\n";
}
else
{
mTopOfStack = mTopOfStack + 1;
mStack[mTopOfStack] = symbol;
}
}
char Pop()
{
if ( IsStackEmpty() )
// Return value '#' indicates stack is empty
return ( '#' );
else
return ( mStack[mTopOfStack--] );
}
int IsStackEmpty()
{
if ( mTopOfStack == -1 )
return ( 1 );
else
return ( 0 );
}
int IsStackFull()
{
if ( mTopOfStack == 49 )
return ( 1 );
else
return ( 0 );
}
};
class InfixToPostfix
{
char infix[50];
char postfix[50];
public:
void ReadInfixExpr()
{
cout << "\nEnter an infix expression:";
cin >> infix;
}
int WhiteSpace ( char symbol )
{
if ( symbol == ' ' || symbol == '\t' || symbol == '\0' )
return 1;
else
return 0;
}
void ConvertToPostfix()
{
StackOperation oStackOperation;
int l, precedence, p;
char Entry1, Entry2;
p = 0;
for ( int i = 0;infix[i] != '\0';i++ )
{
Entry1 = infix[i];
if ( !WhiteSpace ( Entry1 ) )
{
switch ( Entry1 )
{
case '(':
oStackOperation.Push ( Entry1 );
break;
case ')':
while ( ( Entry2 = oStackOperation.Pop() ) != '(' )
postfix[p++] = Entry2;
break;
case '+':
case '-':
case '*':
case '/':
if ( !oStackOperation.IsStackEmpty() )
{
precedence = PrecedenceSymbol ( Entry1 );
Entry2 = oStackOperation.Pop();
while ( precedence <= PrecedenceSymbol ( Entry2 ) )
{
postfix[p++] = Entry2;
if ( !oStackOperation.IsStackEmpty() )
Entry2 = oStackOperation.Pop();
else
break;
}
if ( precedence > PrecedenceSymbol ( Entry2 ) )
oStackOperation.Push ( Entry2 );
}
oStackOperation.Push ( Entry1 );
break;
default:
postfix[p++] = Entry1;
break;
}
}
}
//while stack is not empty
while ( !oStackOperation.IsStackEmpty() )
postfix[p++] = oStackOperation.Pop();
postfix[p] = '\0';
cout << "\nThe postfix expression is: " << postfix << endl;
}
int PrecedenceSymbol ( char symbol )
{
switch ( symbol )
{
// Precedence of / is 4
case '/':
return ( 4 );
// Precedence of * is 3
case '*':
return ( 3 );
// Precedence of + is 2
case '+':
return ( 2 );
// Precedence of - is 1
case '-':
return ( 1 );
// Precedence of ( is 0
case '(':
return ( 0 );
return ( -1 );
}
}
};
void main()
{
char choice = 'y';
InfixToPostfix oInfixToPostfix;
clrscr();
while ( choice == 'y' )
{
oInfixToPostfix.ReadInfixExpr();
oInfixToPostfix.ConvertToPostfix();
cout << "\n\nDo you want to continue ? (y/n): ";
cin >> choice;
}
getch();
}