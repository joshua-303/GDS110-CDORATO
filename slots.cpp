#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int coolFunc (int a) {
    return rand() % a;
}

int main() {
    srand(time(NULL));

    int credits = 1000;
    int ante = 150;
    string results[] = {"Apple", "Orange", "Grapes", "Strawberry"};
    int resultValue[] = {100, 75, 50, 25};
    int slots[4];

    do {
        int decision;
        int payout;
        cout << "1. Spin\n2. Quit\nApples = 100\nOranges = 75\nGrapes = 50\nStrawberries = 25\nYour current credit total is " << credits << ", and the current ante is " << ante <<".\nMake your selection: ";
        cin >> decision;

        switch(decision) {
            case 1:
                for (int i = 0; i <= 4; i++) {
                    slots[i] = coolFunc(4);
                }

                credits -= ante;
                cout << results[slots[0]] << " " << results[slots[1]] << " " << results[slots[2]] << " " << results[slots[3]] << endl;

                if (slots[0] == slots[1] && slots[0] == slots[2] && slots[0] == slots[3]) {
                    payout = 1000;
                    credits += payout;
                    cout << "JACKPOT! You win 1000 credits! Your new balance is " << credits << "!\n" << endl;
                    system("pause");
                } else {
                    payout = resultValue[slots[0]] + resultValue[slots[1]] + resultValue[slots[2]] + resultValue[slots[3]];
                    credits += payout;
                    cout << "Your payout was " << payout << "! Your new balance is " << credits << "!\n" << endl;
                    system("pause");
                    }
                break;
            case 2:
                cout << "\nThank you so much for playing! Your final total was " << credits << "." << endl;
                system("pause");
                exit(0);
            default:
                cout << "Invalid input.\n" << endl;
                system("pause");
                break;
            }
        } while (credits != 0);

    cout << "Apologies, but it seems that you've run out of credits with which to play, which concludes our game. Good bye." << endl;
    exit(0);
}