#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string words[] = {"terminator", "banana", "computer", "cow", "rain", "water"};

int main() {
    srand (time(NULL));
    int index = rand() % 6;
    cout << index << endl;
    cout << words[index] << endl;
    return 0;
}