#include <iostream>

using namespace std;

class A { // this class has a function declared but not defined; hence A is an Abstract class   
    public:
        virtual void displayOne();
};

class B: public A {
    public:
        void displayOne() {
            cout << "I belong to CHILD class" << endl;
        }
};

int main() {
    B objB;
    A onjA;
    objB.displayOne();
    objB.displayOne();
    return 0;
}