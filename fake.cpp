#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int damage;

    srand(time(NULL));

    for(int trials = 0; trials < 10; trials++) {
        damage = rand() % 21;
        cout << "Damage = " << damage << endl;
    }
    return 0;
}