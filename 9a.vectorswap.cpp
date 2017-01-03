#include <vector>
#include <iostream>
using namespace std;
int main()
{
unsigned int i;
// vector container for integer elements
vector<int> vector_one, vector_two;
int start_one, start_two;
int size_one, size_two;
cout << "Enter the range for vector one";
cin >> start_one >> size_one;
cout << "Enter the range for vector two";
cin >> start_two >> size_two;
// print vector data
cout << "vector_one data: ";
// append elements with values
for ( i = start_one; i <= size_one; ++i )
vector_one.push_back ( i );
// print all elements separated by a space
for ( i = 0; i < vector_one.size(); ++i )
cout << vector_one[i] << ' ';
cout << endl;
cout << "vector_two data: ";
// append elements with values 11 to 20
for ( i = start_two; i <= size_two; ++i )
vector_two.push_back ( i );
// print all elements separated by a space
for ( i = 0; i < vector_two.size(); ++i )
cout << vector_two[i] << ' ';
cout << endl;
// do the swapping
cout << "Operation:Swapping two vectors" << endl << endl;
vector_one.swap ( vector_two );
cout << "vector_one data: ";
for ( i = 0; i < vector_one.size(); ++i )
cout << vector_one[i] << ' ';
cout << endl;
cout << "vector_two data: ";
for ( i = 0; i < vector_two.size(); ++i )
cout << vector_two[i] << ' ';
cout << endl;
cout << "The number of elements in vector_one = " << vector_one.size() << endl;
cout << "The number of elements in vector_two = " << vector_two.size() << endl;
cout << endl;
return 0;
}