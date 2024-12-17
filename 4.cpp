#include <iostream>  //Include iostream library

using namespace std; //All standard C++ Libraries is loaded for std namespace

int main()// creating main function with returning int type
{
    int A= 9, B= 3;
    while(A!=B)
    {
        if( A > B)
        A -= B;
        else
        B -= A;
    }
    cout << A; //pushing the value from A to cout object as stream of bits
    return 0;
}