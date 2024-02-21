#include <iostream>
#include <string>

using namespace std;

string words[] = {"terminator", "banana", "computer", "cow", "rain", "water"};

int main() {
    string output[] = {
        "+---------+",
        "|         O",
        "|        /|\\",
        "|        / \\",
        "|          ",
        "+===       "
    };

    int trial = 6;

    for(int i = 0; i < trial; i++) {
        cout << output[i] << endl;
    }
    return 0;
}