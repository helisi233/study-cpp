//
// Created by helisi on 2022/8/15.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 10,b = 20;
    int c = a + b;

    cout << c << endl;
    c += a;
    cout << c << endl;
    c -= a;
    cout << c << endl;
    c *= a;
    cout << c << endl;
    c /= a;
    cout << c << endl;
    c %= a;
    cout << c << endl;
    c <<= a;
    cout << c << endl;
    c >>= a;
    cout << c << endl;
    c &= a;
    cout << c << endl;
    c ^= a;
    cout << c << endl;
    c |= a;
    cout << c << endl;

    return 0;
}