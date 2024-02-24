#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string words[] = {"smile", "niceness", "bahamut", "dollar", "spongebob"};

int main() {
    srand(time(NULL));
    int randNum = rand() % (sizeof(words) / sizeof(string));
    int attempts = 0;
    string secret = words[randNum];
    string tempSecret = secret;
    string publicWord = string(secret.length(), '_');
    cout << publicWord << endl;

    while(publicWord.compare(secret) != 0) {
        char playerGuess;
        cout << "Guess the word! ";
        cin >> playerGuess;

        string guess(1, playerGuess);
        cout << guess << endl;
        bool charIsFound = false;

        //checks tempsecret for every instance of a successful guess within the string
        for(int foundChar = 0; foundChar != -1 && playerGuess != '*';) {
                foundChar = tempSecret.find(guess);
                if (foundChar != -1) {
                    charIsFound = true;
                    publicWord.replace(foundChar, 1, guess);
                    tempSecret.replace(foundChar, 1 , "*");
                }
        }

        cout << publicWord << endl;
        cin.ignore(10000, '\n');

        if (charIsFound == false) {
            attempts++;

            for(int i = 1; i <= attempts; i++) {
                string hangman[] = {
                    "+---------+",
                    "|         O",
                    "|        /|\\",
                    "|        / \\",
                    "|          ",
                    "+===       "
                };
                cout << hangman[i-1] << endl;
            }
        }

        if (attempts >= 6) {
            cout << "Unfortunately, you've lost. The word was " << secret << "." << endl;
            system("pause");
            exit(0);
        }
    }
    
    cout << "You've won! Congratulations! It took you " << attempts << " attempts to guess the word, '" << secret << "'." << endl;
    system("pause");
    exit(0);
}