//
// Created by helisi on 2022/8/31.
//
#include <iostream>

using namespace std;

int main(void) {

    int a = 123;
    int* b = &a;
    int** c = &b;

    cout << "a��ֵ:" << a << endl;
    cout << "a�ĵ�ַ:" << &a << " b��ֵ:" << b << endl;
    cout << "b�ĵ�ַ:" << &b << " c��ֵ:" << c << endl;

    int* pA = NULL;
    pA = &a;
    if(pA != NULL) {
        cout << (*pA) << endl;
    }
    pA = NULL;

    return 0;
}