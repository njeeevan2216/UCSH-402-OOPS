#include <iostream>
using namespace std;

class Programmer {
private:
    int G, P, I;

public:
    void inputMarks() {
        cout << "Enter marks for Graduation (60-99): ";
        cin >> G;
        cout << "Enter marks for Post-graduation (60-99): ";
        cin >> P;
        cout << "Enter marks for Interview (0-9): ";
        cin >> I;
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
        cout << "Enter marks for Programmer 1:\n";
        p1.inputMarks();
        cout << "Enter marks for Programmer 2:\n";
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
    Team team;
    team.inputTeamMarks();

    if (team.isSelected()) {
        cout << "The team is selected by the company.\n";
    } else {
        cout << "The team is not selected by the company.\n";
    }

    return 0;
}