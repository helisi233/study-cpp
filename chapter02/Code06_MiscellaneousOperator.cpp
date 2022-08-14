//
// Created by helisi on 2022/8/15.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 10, b = 20;
    cout << sizeof(a) << endl;
    int c = a > b ? 1 : 0;
    cout << c << endl;
    int d = a < b ? 1 : 0;
    cout << d << endl;
    int e = (a, b, c);
    cout << e << endl;
    float f = float(e);
    cout << f << endl;
    cout << &f << endl;
    float *p = &f;
    cout << p << endl;
    cout << *p << endl;

    typedef struct {
        short Sunday = 0;
        short Monday = 1;
        short Tuesday = 2;
        short Wednesday = 3;
        short Thursday = 4;
        short Friday = 5;
        short Saturday = 6;
    }Week;
    Week w;
    cout << w.Friday << endl;
    cout << sizeof(w) << endl;

    return 0;
}