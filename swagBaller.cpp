#include <iostream>
#include <ctime>

using namespace std;

void main() {
    srand(time(NULL));

    int compRand = rand() % 100 + 1;
    int playerInput;
    int attemptNum = 0;

    for(attemptNum; attemptNum <= 4; attemptNum++) {
        cout << "Guess a number between 1 and 100! You've currently used " << attemptNum << " attempts! ";
        cin >> playerInput;

        if (playerInput == compRand) {
            cout << "Congratulations, you win! Won in " << attemptNum << " attempts! Just as a refresher, the number was " << compRand << "!" << endl;
            exit(0);
        } else if (playerInput > compRand) {
            cout << "Your guess was too high, go lower." << endl;
        } else if (playerInput < compRand) {
            cout << "Your guess was too low, go higher." << endl;
        }
    }

    cout << "You've used all 5 attempts, which means that you've lost. Too bad! The number was " << compRand << "!"  << endl;
}