#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
// Create object to get input values
clrscr();
ifstream oFileinput;
// Open the text file in read mode
oFileinput.open ( "out.txt" );
// Character declaration
char char_text;
//Integer variable declaration
int int_count = 0;
/* Read the character until the file reach end of file*/
while ( !oFileinput.eof() )
{
// Read characters from the text file
oFileinput.get ( char_text );
// Increment the count values
int_count++;
}
// Display number of characters in text file
cout << "Number of characters in file is " << int_count;
//Close the text file opened in read mode
oFileinput.close();
getch();
}