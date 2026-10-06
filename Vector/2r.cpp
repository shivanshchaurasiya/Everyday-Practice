#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "I have chosen a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high!\n";
        }
        else if (guess < secret) {
            cout << "Too low!\n";
        }
        else {
            cout << "Correct! You guessed it in "
                 << attempts << " attempts.\n";
        }

    } while (guess != secret);

    return 0;
}
