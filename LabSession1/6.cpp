#include <iostream> //Include iostream library

using namespace std;//All standard C++ Libraries is loaded for std namespace

int foo( int x, int y, int q) //creating a function foo with returning int type
{
    if ((x <= 0) && (y <= 0))
    return q;
    if (x <= 0)
    return foo(x, y-q, q);
    if (y <= 0)
    return foo(x-q, y, q);
    return foo(x, y-q, q) + foo(x-q, y, q);
}

int main()// creating main function with returning int type
{
    int r = foo(15, 15, 10);
    cout << r;//pushing the value from r to cout object as stream of bits
    return 0;
}