//
// Created by helisi on 2022/8/14.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 10;
    int b = 20;

    std::cout << a + b << std::endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    // 整数 / 整数 = 只保留整数部分
    cout << 15 / a << endl;
    // 浮点数 / 整数 = 浮点数
    cout << 15.0 / a << endl;
    cout << a % b << endl;
    // ++a先加一在返回 a++先返回在加一
    cout << ++a << endl;
    // --a先减一在返回 a--先返回在减一
    cout << --a << endl;

    return 0;
}