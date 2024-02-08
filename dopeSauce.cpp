#include <iostream>
#include <string>

using namespace std;

typedef string (*stringFunc) ();

string function() {
    return "Hello";
};
int functionTimesTwo(int a){ return a*2; }
int functionDivideByTwo(int a){ return a/2; }

void main()
{
    int selection;

    stringFunc functions[] = 
    {
        function
    };

    cin >> selection;

    cout << functions[selection-1]();
}