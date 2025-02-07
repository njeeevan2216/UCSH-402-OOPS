#include <iostream>
using namespace std;

class X {
    private:
        int i;
        //static int si;
    public:
        static int si;
        
        void set_i(int arg) { 
            i = arg; 
        }

        static void set_si(int arg) {
            //i = arg; //static funstion cannot access non static variable
            si = arg;
        } 

        void print_i() {
            cout << "Value of i = " << i << endl;
            cout << "Again, value of i = " << this->i << endl;
        }

        static void print_si() {
            cout << "Value of si = " << si << endl;
            //cout << "Again, value of si = " << this->si << endl; // error
        }
};

int X::si = 99;       // Initialize static data member

int main() {
  cout<< X::si << endl;
  X xobj;
  xobj.set_i(99);
  xobj.print_i();
  xobj.set_si(99); //static functions can be called using objects
  xobj.print_si();
}

// any modification to a static variabel is seen by all the objects of the class