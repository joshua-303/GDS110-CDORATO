#include <iostream>
using namespace std;

void swap (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2 (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int x = 7;
    int y = 31;
    cout << "Original x, y: " << x << ", " << y << endl;
    swap (x, y);
    cout << "After swap(): " << x << ", " << y << endl;
    cout << "End of pass by value example.\n" << endl;

    cout << "Original x, y: " << x << ", " << y << endl;
    swap2(&x, &y);
    cout << "After swap2(): " << x << ", " << y << endl;
    cout << "End of pass by reference example.\n" << endl;
}
