#include <iostream>
using namespace std;
class X
{
private:
    int i, j;

public:
    X()
    { // default constructor
        cout << "Default Constructo is called:" << endl;
        i = 0;
        j = 0;
    }
    X(int a, int b)
    { // parameterized constructor //this is called constructor overloading
        cout << "Parameterised Constructor is called:" << endl;
        i = a;
        j = b;
    }
    void display()
    {
        cout << "The number is" << i << "+i" << j << endl;
    }
    ~X()
    {
        cout << "Destrcutor is called" << endl;
    }
};

int main()
{
    X x1;
    X x2(2, 3);
    x1.display();
    x2.display();
    return 0;
}