#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string words[] = {"terminator", "banana", "computer", "cow", "rain", "water"};

int main() {
    srand(time(NULL));
    int index = rand() % 6;

    string guess;
    int trial = 0;
    while(trial < 5) {
        cout << "Type your guess: ";
        cin >> guess;
        if (guess.compare(words[index])) {
            cout << "You win!" << endl;
            break;
        }
        trial += 1;
    }
    if (trial >= 5) {
        cout << "You lost." << endl;
    }
    return 0;
}