#include <iostream>
using namespace std;

int main() {
    int selection;
    do {
        cout << "<<< MAIN MENU >>>\n1. Change Actions\n2. Button Layout\n3. Keybindings\n4. OnEvent Scripts\n5. Exit\nSelect a number: ";
        cin >> selection;
        switch (selection) {
            case 1:
                cout << "Change Actions routine." << endl;
                break;
            case 2:
                cout << "Button Layout routine." << endl;
                break;
            case 3:
                cout << "Key Bindings routine." << endl;
                break;
            case 4:
                cout << "OnEvent Scripts routine." << endl;
                break;
            case 5:
                cout << "Exiting." << endl;
                exit(0);
            default:
                cout << "Invalid entry." << endl;
                break;
        }
    } while (selection != 0);
}