//
// Created by helisi on 2022/8/15.
//
#include <iostream>

using namespace std;

// 二进制传无符号整形
unsigned int B2U(unsigned int num) {
    return (unsigned int)(num);
}

// 二进制转有符号整形
int B2T(int num) {
    return (int)(num);
}

int main(void) {

    cout << B2U(0x00000000) << endl;
    cout << B2U(0xFFFFFFFF) << endl;
    cout << B2U(0x80000000) << endl;
    cout << B2U(0x7FFFFFFF) << endl;

    cout << endl;

    cout << B2T(0x00000001) << endl;
    cout << B2T(0x00000002) << endl;
    cout << B2T(0x00000003) << endl;
    cout << B2T(0x7FFFFFFD) << endl;
    cout << B2T(0x7FFFFFFE) << endl;
    cout << B2T(0x7FFFFFFF) << endl;
    cout << B2T(0x80000000) << endl;
    cout << B2T(0x80000001) << endl;
    cout << B2T(0x80000002) << endl;
    cout << B2T(0xFFFFFFFD) << endl;
    cout << B2T(0xFFFFFFFE) << endl;
    cout << B2T(0xFFFFFFFF) << endl;
    cout << B2T(0x00000000) << endl;

    return 0;
}