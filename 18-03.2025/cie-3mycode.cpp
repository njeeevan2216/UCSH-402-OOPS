#include <iostream>

using namespace std;

class Patient {   
    string p_name, disease;
    public:
        Patient() {
            cout << "Enter Name: ";
            cin >> p_name;
            cout << "Enter Disease: ";
            cin >> disease;
        }

        void putdata() {
            cout << "Name: " << p_name << endl;
            cout << "Disease: " << disease << endl;
        }
};

class In_patient : private Patient {
    float roomrent;
    public:
        In_patient() {
            cout << "Enter Name: ";
            cin >> p_name;
            cout << "Enter Disease: ";
            cin >> disease;
            cout << "Enter rent: ";
            cin >> roomrent;
        }

        void putdata() {
            cout << "Name: " << p_name << endl;
            cout << "Disease: " << disease << endl;
            cout << "Room Rent: " << roomrent << endl;
        }
};

class Out_patient : private Patient {
    float OPD_charges;
    public:
        Out_patient() {
            cout << "Enter Name: ";
            cin >> p_name;
            cout << "Enter Disease: ";
            cin >> disease;
            cout << "Enter OPD_charges: ";
            cin >> OPD_charges;
        }

        void putdata() {
            cout << "Name: " << p_name << endl;
            cout << "Disease: " << disease << endl;
            cout << "OPD_charges: " << OPD_charges << endl;
        }
};

int main() {
    In_patient IP1;
    IP1.putdata();

    Out_patient OP1;
    OP1.putdata();
}