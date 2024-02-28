#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int whoseTurn;

    srand(time(NULL));

    for(int trials = 0; trials < 10; trials++) {
        whoseTurn = rand() % 2;
        cout << "Whose turn = " << whoseTurn << endl;
    }
    return 0;
}