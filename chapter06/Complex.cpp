//
// Created by helisi on 2022/11/8.
//

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double r, double i)
{
    _real = r;
    _image = i;
    cout << "Complex::Complex(double, double)" << endl;
}

Complex::Complex()
{
    _real = 0.0;
    _image = 0.0;
    cout << "Complex::Complex()" << endl;
}

Complex::~Complex()
{
    cout << "Complex::~Complex()" << endl;
}

Complex Complex::operator+(const Complex &x)
{
    Complex tmp;    // 栈中的中间变量
    tmp._real = _real + x._real;
    tmp._image = _image + x._image;
    return tmp;
}

// 参数的&表示引用
Complex& Complex::operator=(const Complex &x)
{
    // if里面的&表示取地址
    if(this != &x)
    {
        _real = x._real;
        _image = x._image;
    }
    // this是一个指针 指向当前对象本身
    return *this;
}

// 函数实现
//double Complex::GetReal() const { return _real;}
//double Complex::GetImage() const { return _image;}
//void Complex::SetReal(double d) {_real = d;}
//void Complex::SetImage(double i) {_image = i;}