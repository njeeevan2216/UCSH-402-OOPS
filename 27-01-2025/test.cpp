#include <iostream>
#include <string>
using namespace std;

class Branch {
private:
    string branchName;
    double allocatedFunds;

public:
    // Constructor to initialize branch details
    Branch(string name) {
        branchName = name;
        allocatedFunds = 0;
    }

    // Method to allocate funds to the branch
    void allocateFunds(double amount) {
        allocatedFunds = amount;
    }

    // Method to get branch name
    string getBranchName() {
        return branchName;
    }

    // Method to get allocated funds
    double getAllocatedFunds() {
        return allocatedFunds;
    }
};

class Company {
private:
    string companyName;
    double initialCapital;
    double remainingCapital;
    Branch branchA;
    Branch branchB;
    Branch branchC;

public:
    // Constructor to initialize company and branches
    Company(string name, double capital)
        : branchA("Branch A"), branchB("Branch B"), branchC("Branch C") {
        companyName = name;
        initialCapital = capital;
        remainingCapital = capital;
    }

    // Method to allocate funds to a branch
    void allocateFunds(string branchName, double amount) {
        if (amount <= remainingCapital) {
            if (branchName == branchA.getBranchName()) {
                branchA.allocateFunds(amount);
            } else if (branchName == branchB.getBranchName()) {
                branchB.allocateFunds(amount);
            } else if (branchName == branchC.getBranchName()) {
                branchC.allocateFunds(amount);
            } else {
                cout << "Invalid branch name: " << branchName << endl;
                return;
            }
            remainingCapital -= amount;
        } else {
            cout << "Insufficient funds to allocate " << amount << " Lakhs to " << branchName << "." << endl;
        }
    }

    // Method to display fund status
    void displayFundsStatus() {
        cout << "------------FUND STATUS------------" << endl;
        cout << "Company: " << companyName << endl;
        cout << "Initial Capital: Rs " << initialCapital << " Lakhs" << endl;
        cout << "Funds Allocation:" << endl;
        cout << "   " << branchA.getBranchName() << ": Rs " << branchA.getAllocatedFunds() << " Lakhs" << endl;
        cout << "   " << branchB.getBranchName() << ": Rs " << branchB.getAllocatedFunds() << " Lakhs" << endl;
        cout << "   " << branchC.getBranchName() << ": Rs " << branchC.getAllocatedFunds() << " Lakhs" << endl;
        cout << "Remaining Capital: Rs " << remainingCapital << " Lakhs" << endl;
    }
};

int main() {
    // Initialize the company
    Company company("Company X", 50); // Initial capital is Rs 50 Lakhs

    // Allocate funds to branches
    company.allocateFunds("Branch A", 15); // Rs 15 Lakhs for Branch A
    company.allocateFunds("Branch B", 14); // Rs 14 Lakhs for Branch B
    company.allocateFunds("Branch C", 9);  // Rs 9 Lakhs for Branch C

    // Display fund status
    company.displayFundsStatus();

    return 0;
}
