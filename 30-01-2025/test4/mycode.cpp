#include <iostream>

using namespace std;

class Programmer{
    private:
    int G, P, I;
    public:
    void inputMarks() {
        cout << "Enter marks of: " << endl;
        while (1) { 
            cout << "   Graduation: ";
            cin >> G;
            if (60>G || G>99) {
                cout << "Enter the proper marks." << endl;
            }
            else break;
        }
        while (1) { 
            cout << "   Post-Graduation: ";
            cin >> P;
            if (60>P || P>99) {
                cout << "Enter the proper marks." << endl;
            }
            else break;
        }
        while (1) { 
            cout << "   Interview: ";
            cin >> I;
            if (0>I || I>9) {
                cout << "Enter the proper marks." << endl;
            }
            else break;
        }
    }

    int getGraduationMarks() {
        return G;
    }

    int getPostGraduationMarks() {
        return P;
    }

    int getInterviewMarks() {
        return I;
    }
};

class Team {
    private:
    Programmer p1, p2;
    public:
    void inputTeamMarks() {
        cout << "Enter marks for Programmer 1: " << endl;
        p1.inputMarks();
        cout << "Enter marks for Programmer 2: " << endl;
        p2.inputMarks();
    }

    void printTeamMarks() {
        cout << "==================================================" << endl;
        cout << "Mark Summary:" << endl;
        cout << "==================================================" << endl;
        cout << "Marks for Programmer 1:" << endl;
        cout << "   Graduation: " << p1.getGraduationMarks() << endl;
        cout << "   Post-Graduation: " << p1.getPostGraduationMarks() << endl;
        cout << "   Interview: " << p1.getInterviewMarks() << endl;
        cout << "Marks for Programmer 2:" << endl;
        cout << "   Graduation: " << p2.getGraduationMarks() << endl;
        cout << "   Post-Graduation: " << p2.getPostGraduationMarks() << endl;
        cout << "   Interview: " << p2.getInterviewMarks() << endl;
        cout << "Marks for the Team:" << endl;
        cout << "   Total Graduation: " << p1.getGraduationMarks() + p2.getGraduationMarks() << endl;
        cout << "   Total Post-Graduation: " << p1.getPostGraduationMarks() + p2.getPostGraduationMarks() << endl;
        cout << "   Total Interview: " << p1.getInterviewMarks() + p2.getInterviewMarks() << endl;
    }

    bool isSelected() {
        int totalG = p1.getGraduationMarks() + p2.getGraduationMarks();
        int totalP = p1.getPostGraduationMarks() + p2.getPostGraduationMarks();
        int totalI = p1.getInterviewMarks() + p2.getInterviewMarks();
        return (totalG > 150 && totalP > 180 && totalI > 9);
    }
};

int main() {
    Team team1;
    team1.inputTeamMarks();
    team1.printTeamMarks();

    cout << "==================================================" << endl;
    if (team1.isSelected()) {
        cout << "The Team is eligible to be Selected :: Hurray!!" << endl;
    }
    else {
        cout << "The Team is NOT eligible to be Selected :: Sorry!!" << endl;
    }
    cout << "==================================================" << endl;

    return 0;
}