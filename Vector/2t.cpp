#include <iostream>
using namespace std;

int main() {
    string name;
    int marks1, marks2, marks3, marks4, marks5;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";

    cin >> marks1;
    cin >> marks2;
    cin >> marks3;
    cin >> marks4;
    cin >> marks5;

    int total = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = total / 5.0;

    cout << "\n===== RESULT =====\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%\n";

    if (percentage >= 90)
        cout << "Grade: A+\n";
    else if (percentage >= 80)
        cout << "Grade: A\n";
    else if (percentage >= 70)
        cout << "Grade: B\n";
    else if (percentage >= 60)
        cout << "Grade: C\n";
    else if (percentage >= 50)
        cout << "Grade: D\n";
    else
        cout << "Grade: F\n";

    return 0;
}
