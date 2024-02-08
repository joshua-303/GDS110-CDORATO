#include <iostream>

using namespace std;

void swap(int a, int b) {
    cout << "Original a, b: " << a << ", " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped a, b: " << a << ", " << b << endl;
}

int main() {
    int x = 7;
    int y = 31;
    swap(x, y);
    cout << "The end" << endl;
}