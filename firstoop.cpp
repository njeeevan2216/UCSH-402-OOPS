#include <iostream>

using namespace std;

class test {
    int a;
    public:
        void setValue() {
            cout << "Enter the value of the object: ";
            cin >> a ;
            cout << endl;
        }
        void dispValue() {
            cout << "The Value of this object is " << a << endl << endl;
        }
};

class stu {
    string studentName;
    int regdNo;
    public:
        void setValues() {
            cout << "Enter the Registration Number: " ;
            cin >> regdNo ;
            cout << "Enter the Name of the Student: " ;
            cin >> studentName ;
            cout << endl ;
        }

        void dispValues() {
            cout << "Student Details:\nRegd. No.: " << regdNo << endl << "Name: " << studentName << endl << endl;
        }
};

int main() {
    int ch;
    stu stu1;
    while(true) {
        cout << "Press,\n1 to Set.\n2 to Display.\n3 to Exit.\n\nEnter your choice: ";
        cin >> ch ;
        if(ch==1) {
            stu1.setValues();
        }
        if(ch==2) {
            stu1.dispValues();
        }
        if(ch==3) {
            break;
        }
    }
    cout << "Bye..." ;
}