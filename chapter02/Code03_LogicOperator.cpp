//
// Created by helisi on 2022/8/14.
//
#include <iostream>
#include <assert.h>

using namespace std;

int main(void) {

    int a = 1;
    int b = 0;

    // 与 && 左右都非0 返回1-真 相当于数学中的交集
    cout << (a && b) << endl;
    cout << (a && !b) << endl;
    // 或 || 左右都是0 返回0-假 相当于数学中的并集
    cout << (a || b) << endl;
    cout << (!a || b) << endl;
    // 非 ! ！1=0 ！0=1
    cout << (!(a && b)) << endl;
    cout << (!(a || b)) << endl;

    bool A = false;
    bool B = true;
    cout << (A == true || A != true) << endl;
    cout << (B == true || B != true) << endl;
    // 摩根率
    cout << (!(A||B) == (!A && !B)) << endl;
    cout << (!(A && B) == (!A || !B)) << endl;

    assert( (!(A||B) == (!A && !B)) );
    assert( (!(A && B) == (!A || !B)) );

    return 0;
}