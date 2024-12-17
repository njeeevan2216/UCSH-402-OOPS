#include <iostream> //Include iostream library

using namespace std; //All standard C++ Libraries is loaded for std namespace

int main() // creating main function with returning int type
{
    float sum = 0.0, j = 1.0, i = 2.0;
    while ( i / j > 0.0625)
    {
        j = j + j;
        sum = sum + i / j;
        cout << sum << endl; //pushing the value from sum and stackning endOfLine character to cout object as stream of bits
    }
    return 0;    
}
