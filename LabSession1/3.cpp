#include <iostream> //Include iostream library

using namespace std;//All standard C++ Libraries is loaded for std namespace

int main()// creating main function with returning int type
{
    int i, j, count;
    count = 0;
    i = 0;
    for (j = -3; j <= 3; j++)
    {
        if((j>=0) && (i++))
        count = count + j;
    }
    count = count + i; 
    cout << count << endl;//pushing the value from count and endline to cout object as stream of bits
    return(0);
}