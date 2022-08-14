//
// Created by helisi on 2022/8/15.
//
#include <iostream>

using namespace std;

int main(void) {

    // a:01010 b:10100
    int a = 10, b = 20;
    // a&b: 00000 => 0
    cout << (a & b) << endl;
    // a|b: 11110 => 30
    cout << (a | b) << endl;
    // a^b: 11110 => 30
    cout << (a ^ b) << endl;
    // ~a: 11111111111110101
    cout << (~a) << endl;
    // a<<2: 00101000 => 40 左移一位<=>乘2
    cout << (a << 2) << endl;
    // a>>2: 00000010 => 2 右移一位<=>除2
    cout << (a >> 2) << endl;

    return 0;
}
