#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int choice;
    int amount;

    cout << "===== ATM MACHINE =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your balance is: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance += amount;

            cout << "Money deposited successfully!\n";
            cout << "New balance: Rs. " << balance << endl;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Please collect your cash.\n";
                cout << "Remaining balance: Rs. " << balance << endl;
            } 
            else {
                cout << "Insufficient balance!\n";
            }
            break;

        case 4:
            cout << "Thank you for using the ATM!\n";
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
