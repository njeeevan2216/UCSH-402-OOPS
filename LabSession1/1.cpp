#include <iostream> //Include iostream library

using namespace std; //All standard C++ Libraries is loaded for std namespace

int main() // creating main function with returning int type
{
	int a = 6;
	int b = 0;
	while(a<10)
	{
		b = a / 12 + 1;
		a += b;
	}
	cout << a; //pushing the value from a to cout object as stream of bits
	return 0;
}
