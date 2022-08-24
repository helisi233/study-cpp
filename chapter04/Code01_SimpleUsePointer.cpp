//
// Created by helisi on 2022/8/24.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 112, b = -1;
    float c = 3.14;

    int* d = &a;
    float* e = &c;

    // d存储a的地址 e存储c的地址
    cout << "d:" << d << " &a:" << &a << endl;
    cout << "e:" << e << " &c:" << &c << endl;

    // 间接访问 通过指针访问它指向的地址
    cout << "*d:" << (*d) << " a:" << a << endl;
    cout << "*e:" << (*e) << " c:" << c << endl;

    return 0;
}
