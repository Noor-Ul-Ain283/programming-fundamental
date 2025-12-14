#include <iostream>
using namespace std;

int main() {
    int salary;
    int experience;

    cout << "Enter your annual salary: ";
    cin >> salary;

    cout << "Enter your work experience (in years): ";
    cin >> experience;

    if (salary >=25000) {
        cout << "You are eligible for a loan.";
    }
    else if (salary >= 20000 && experience > 5) {
        cout << "You are eligible for a loan.";
    }
    else {
        cout << "You are not eligible for a loan.";
    }
	return 0;
}
