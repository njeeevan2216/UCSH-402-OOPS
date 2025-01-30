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

    if (team1.isSelected()) {
        cout << "The Team is Selected :: Hurray!!" << endl;
    }
    else {
        cout << "The Team is not Selected :: Sorry!!" << endl;
    }
    return 0;
}