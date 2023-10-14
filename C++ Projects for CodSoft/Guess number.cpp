#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    
    srand(static_cast<unsigned>(time(nullptr)));

    
    int SecretNumber = rand() % 100 + 1;

    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        tries++;

        if (guess < SecretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > SecretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << SecretNumber << " in " << tries << " attempts." << endl;
        }
    } while (guess != SecretNumber);

    return 0;
}

