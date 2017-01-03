#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
// create empty vector for strings
vector <string> sentence;
string str;
// reserve memory for five elements to avoid reallocation
sentence.reserve ( 5 );
string str1[100];
cout << "Enter the element to append into the vector";
cin >> str;
// append some elements
sentence.push_back ( str );
cout << "Enter strings to add in the vector";
for ( int i = 0;i < 5;i++ )
cin >> str1[i];
for ( int j = 0;j < 5;j++ )
{
sentence.insert ( sentence.end(), str1[j] );
}
// print elements separated with spaces
copy ( sentence.begin(), sentence.end(),
ostream_iterator<string> ( cout, " " ) );
cout << endl;
// print ``technical data''
cout << " max_size(): " << sentence.max_size() << endl;
cout << " size(): " << sentence.size() << endl;
cout << " capacity(): " << sentence.capacity() << endl;
int position;
string new_string;
cout << "Enter the position to insert the new string";
cin >> position;
cout << "Enter the new string";
cin >> new_string;
// insert element "always" before element "?"
sentence.insert ( find ( sentence.begin(), sentence.end(), sentence[position-1] ),
new_string );
// assign "!" to the last element
sentence.back() = "!";
// print elements separated with spaces
copy ( sentence.begin(), sentence.end(),
ostream_iterator<string> ( cout, " " ) );
cout << endl;
// print ``technical data'' again
cout << " max_size(): " << sentence.max_size() << endl;
cout << " size(): " << sentence.size() << endl;
cout << " capacity(): " << sentence.capacity() << endl;
int position_one, position_two;
cout << "Enter the positions to swap two string";
cin >> position_one >> position_two;
// swap second and fourth element
swap ( sentence[position_one-1], sentence[position_two-1] );
cout << "After swapping";
copy ( sentence.begin(), sentence.end(),
ostream_iterator<string> ( cout, " " ));
cout<<endl;
}