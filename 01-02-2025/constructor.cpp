#include <iostream>
using namespace std;
class X {
    int i;
    string Name;
    public:
        X(){
            i=100;
            Name="Sai";
            cout << "The constructor is working" << endl; 
        }

        void display() {
            cout<< "Swami's age is " << i << endl;
        }
};

int main() {
  X x1; //WHen object is initalized, The COnstructor function is called
  //cout<<x1.i<<endl;
  //cout<<x1.Name<<endl;
  x1.display();
  return 0;
}