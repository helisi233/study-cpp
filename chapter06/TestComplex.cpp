//
// Created by helisi on 2022/11/8.
//
#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex a(1.0, 2.0);
    cout << a.GetReal() << endl;
    cout << a.GetImage() << endl;



    a.SetReal(3.0);
    a.SetImage(4.0);
    cout << a.GetReal() << endl;
    cout << a.GetImage() << endl;

    Complex b(5.0, 6.0);

    // c++自动做了等号重载
    // Complex c = a + b 是定义
    Complex c;  // 定义
    c = a + b;  // 赋值

    return 0;
}