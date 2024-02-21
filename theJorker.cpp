#include <iostream>
#include <string>

using namespace std;

string words[] = {"terminator", "banana", "computer", "cow", "rain", "water"};

int main() {
    string secret = words[2];
    cout << "Secret = " << secret << endl;

    int len = secret.length();
    cout << "Length = " << len << endl;

    string allCharGuessed = string(len, '*');
    cout << "allCharGuessed = " << allCharGuessed << endl;

    char guess;
    cout << "Type a letter: ";
    cin >> guess;

    string s_guess(1, guess);
    cout << "s_guess = " << s_guess << endl;

    int found;
    found = secret.find(s_guess);
    cout << "Found = " << found << endl;

    secret.replace(found,1,"*");
    cout << "Secret = " << secret << endl;

    return 0;
}