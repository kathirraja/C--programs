#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
#include<conio.h>
const int MAX = 50 ;
class PostfixExpressionEvaluation
{
private :
int mStack[MAX] ;
int mTopofstack, mReturnvalue ;
char *ptemp ;
public :
PostfixExpressionEvaluation( ) ;
void SetExpression(char *pstr ) ;
void Push ( int item ) ;
int Pop( ) ;
void Evaluate( ) ;
void Show( ) ;
} ;
PostfixExpressionEvaluation :: PostfixExpressionEvaluation( )
{
mTopofstack = -1 ;
}
void PostfixExpressionEvaluation :: SetExpression ( char *pstr )
{
ptemp = pstr ;
}
void PostfixExpressionEvaluation :: Push ( int item )
{
if ( mTopofstack ==MAX - 1 )
cout << endl << "Stack is full" ;
else
{
mTopofstack++ ;
mStack[mTopofstack] = item ;
}
}
int PostfixExpressionEvaluation ::Pop( )
{
if ( mTopofstack == -1 )
{
cout << endl << "Stack is empty" ;
return NULL ;
}
int data = mStack[mTopofstack];
mTopofstack-- ;
return data ;
}
void PostfixExpressionEvaluation :: Evaluate( )
{
int value1, value2, result ;
while ( *ptemp )
{
if ( *ptemp == ' ' || *ptemp == '\t' )
{
ptemp++ ;
continue ;
}
if ( isdigit ( *ptemp ) )
{
mReturnvalue = *ptemp - '0' ;
Push ( mReturnvalue ) ;
}
else
{
value1 = Pop( ) ;
value2 = Pop( ) ;
switch ( *ptemp )
{
case '+' :
result = value2 + value1 ;
break ;
case '-' :
result = value2 - value1 ;
break ;
case '/' :
result = value2 / value1 ;
break ;
case '*' :
result = value2 * value1 ;
break;
case '%' :
result = value2 % value1 ;
break ;
case '$' :
result = pow ( value2 , value1 ) ;
break ;
default :
cout << "Unknown operator" ;
exit ( 1 ) ;
}
Push ( result ) ;
}
ptemp++ ;
}
}
void PostfixExpressionEvaluation :: Show( )
{
mReturnvalue = Pop ( ) ;
cout << "Result is: " << mReturnvalue ;
}
void main()
{
char expr[MAX] ;
clrscr();
cout << "\nEnterpostfix expression to be evaluated : " ;
cin.getline ( expr, MAX ) ;
PostfixExpressionEvaluation oPostfix ;
oPostfix.SetExpression ( expr ) ;
oPostfix.Evaluate( ) ;
oPostfix.Show( ) ;
getch();
}