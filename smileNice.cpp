#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int bHealth = 100;
    int lHealth = 100;

    do {
        bHealth = bHealth - 20;
        lHealth = lHealth - 20;

        cout << "bHealth = " << bHealth << endl;
        cout << "lHealth = " << lHealth << endl;
    } while(bHealth > 0 && lHealth > 0);
    return 0;
}