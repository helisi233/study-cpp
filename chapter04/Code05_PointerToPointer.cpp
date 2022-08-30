//
// Created by helisi on 2022/8/31.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 123;
    int* b = &a;
    int** c = &b;

    cout << "a的值:" << a << endl;

    cout << "a的地址:" << &a << " b的值:" << b << endl;

    cout << "b的地址:" << &b << " c的值:" << c << endl;

    return 0;
}