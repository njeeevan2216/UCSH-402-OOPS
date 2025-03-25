//Sometimes, you need a class implementation that is 
//same for all classes, only the data types used are different.
//class templates make it easy to reuse the same code for all data types.
#include <iostream>
using namespace std;

class Calculator
{
    public:
        template <class T>
            T add(T i, T j) { return i + j; }
            
        template <class T>
            T subtract(T i, T j) { return i - j; }
            
        template <class T>
            T multiply(T i, T j) { return i * j; }
            
        template <class T>
            T divide(T i, T j) { return i / j; }
};

int main()
{
	Calculator calc;
	
	cout << "Int results:" << calc.add(2, 3) << endl;	
	cout << "Float results:" << calc.add(2.3, 3.4) << endl;
	
	return 0;
}
