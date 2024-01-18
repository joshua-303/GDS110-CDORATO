#include <iostream>

using namespace std;

void main() {
    int coupon;
    int candyb = 0;
    int gumb = 0;
    int remain = 0;
    cout << "How many coupons have you won? ";
    cin >> coupon;

    if(coupon >= 10) {
        candyb = coupon/10;
        coupon = coupon%10;
    }

    if(coupon >= 3) {
        gumb = coupon/3;
        remain = coupon%3;
    } else {
        remain = coupon;
    }

    cout << "\nYou have " << candyb << " candy bars, " << gumb << " gumballs and " << remain << " coupons remaining." << endl;
}