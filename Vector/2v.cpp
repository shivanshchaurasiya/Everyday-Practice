#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int userChoice;
    int computerChoice;

    cout << "===== ROCK PAPER SCISSORS =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "\nEnter your choice: ";
    cin >> userChoice;

    computerChoice = rand() % 3 + 1;

    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a Draw!\n";
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
        cout << "You Win! \n";
    }
    else {
        cout << "Computer Wins! \\n";
    }

    return 0;
}
