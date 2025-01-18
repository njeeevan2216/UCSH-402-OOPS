#include <iostream> //Include iostream library

using namespace std;//All standard C++ Libraries is loaded for std namespace

int funcp() //creating a function funcp with returning int type
{
    static int x = 1;
    x++;
    return x;
}

int main()// creating main function with returning int type
{
    int x, y;
    x = funcp();
    y = funcp() + x;
    cout << (x+y) << endl;//pushing the value from the calculation and endline to cout object as stream of bits
    return 0;
}