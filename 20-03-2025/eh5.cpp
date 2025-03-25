//When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is 
//transferred to catch block.
#include <iostream> 
using namespace std; 
  
class Test { 
public: 
  string name= "wow";
   Test() { cout << "Constructor of Test " << endl; } 
  ~Test() { cout << "Destructor of Test "  << endl; } 
}; 
  
int main() { 
  try { 
    Test t1; 
    throw t1; 
  } catch(Test i) { 
    cout << "Caught " << i.name << endl; 
  } 
} 

