#include <iostream>

using namespace std;

class complex {
    int real, imag;
    public:
        void setValue() {
            cout << "Enter the real part of the complex: ";
            cin >> real;
            cout << "Enter the imaginary part of the complex: ";
            cin >> imag;
        }

        void dispValue() {
            cout << "This Complex is: " << real;
            if (imag>=0)
            cout << "+" << imag << "i" << endl;
            else
            cout << imag << "i" << endl;
        }

        void putReal(int r) {
            real= r;
        }

        void putImag(int i) {
            imag= i;
        }

        int getReal() {
            return(real);
        }

        int getImag() {
            return(imag);
        }

        void addWith(complex a);
};

void complex::addWith(complex a) {
    real= real + a.getReal();
    imag= imag + a.getImag();
}

complex sum(complex a, complex b) {
    complex t;
    t.putReal(a.getReal()+b.getReal());
    t.putImag(a.getImag()+b.getImag());
    return(t);
}

int main() {
    int ch;
    complex i1, i2;/*
    while(true) {
        cout << "Press,\n1 to Set.\n2 to Display.\n3 to Add BOTH A and B.\n4 to Exit.\n\nEnter your choice: ";
        cin >> ch ;
        if(ch==1) {
            cout << "\n\nPress,\n1 to set A.\n2 to set B.\nEnter your choice: ";
            cin >> ch;
            if (ch==1)
            i1.setValue();
            else if (ch==2)
            i2.setValue();
        }
        else if(ch==2) {
            cout << "\n\nPress,\n1 to display A.\n2 to display B.\nEnter your choice: ";
            cin >> ch;
            if (ch==1)
            i1.dispValue();
            else if (ch==2)
            i2.dispValue();
        }
        else if(ch==3) {
            cout << "\n\nSelect Addition format:\n1. A = A + B\n2. B = A + B\n3.Just Display Addition.\nEnter your choice(1, 2 or 3): ";
            cin >> ch;
            if (ch==1)
            {
                i1.addWith(i2);
                cout << "Added ( A = A+B ) Succesfully" << endl;

            }
            else if(ch==2)
            {
                i2.addWith(i1);
                cout << "Added ( B = A+B ) Succesfully" << endl;

            }
            else {
                sum(i1,i2).dispValue();
            }
        }
        else if(ch==4) {
            break;
        }
        cout << endl << endl;
    }
    cout << "Bye..." ;*/
    cout << sizeof(i1) << endl;
    return(0);
}