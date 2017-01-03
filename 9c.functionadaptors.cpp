#include <iostream> 
#include <algorithm> 
template<class T> 
struct PrintData 
{ 
PrintData ( std::ostream &out ) : os_ ( out ), count_ ( 0 ) {} 
void operator() ( T x ) 
{ 
os_ << x << ' '; 
++count_; }; 
std::ostream &os_; 
int count_; 
};
int main () 
{ 
int array[] = {1, 4, 2, 8, 5, 7};
const int N = sizeof ( array ) / sizeof ( int );
// for_each() returns function object after being applied to each element 
PrintData<int> f = std::for_each ( array, array + N, PrintData<int> ( std::cout ) );
std::cout << std::endl << std::endl << f.count_ << " objects printed." << std::endl;
return 0; 
}