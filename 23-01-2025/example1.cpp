#include <iostream>
using namespace std;

int main()
{

    // dynamically allocate memory
    // new is an operator for allocating memory for a given data type.
    // this memory allocation is done at runtime
    int *point_int = new int{45}; // By this we may avoid Memory leaks and Dangling pointers
    float *point_float = new float{45.45f};

    cout << *point_int << endl;
    cout << *point_float << endl;

    // deallocate the memory
    // set pointers to nullptr
    delete point_int;

    delete point_float;

    cout << *point_int << endl;

    return 0;
}
