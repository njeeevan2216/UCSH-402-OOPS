// simple example to show exception handling in C++
#include <iostream>

using namespace std;

class X {
    int i;
    public:
        void input() {
            cout << "Enter value of x: ";
            cin >> i;
        }

        void debug() {
            cout << "Before try \n";
        
            try
            {
                cout << "Inside try \n";
                if (i > 0) // trying / exceptional condition
                {
                    throw i;
                    cout << "After throw (Never executed) \n";
                }
            }
        
            catch (int x)   
            {
                cout << "Exception Caught \n";
            }
            cout << "After catch (Will be executed) \n";
        }

        void print() {
            cout << i << endl;
        }
};

int main()

{
    X x;
    x.input();
    x.debug();
    x.print();
}