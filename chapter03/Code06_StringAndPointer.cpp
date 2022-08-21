//
// Created by helisi on 2022/8/20.
//
#include <iostream>

using namespace std;

int main(void) {

    // 定义一个数组
    char strHelloWorld[11] = {"HelloWorld"};
    char* pStrHelloWorld1 = "HelloWorld";

    // 指针可以重新赋值
    char* pStrHelloWorld2 = "HelloWorld";
    pStrHelloWorld2 = strHelloWorld;
    // error 数组不能重新赋值
//    strHelloWorld = pStrHelloWorld1;

    // 避免处理结束符 只处理前10个字符
    for (int i = 0; i < 10; ++i) {
        strHelloWorld[i] += 1;
        cout << strHelloWorld[i] << endl;
    }

    // error 指向的区域不可变
    for (int j = 0; j < 10; ++j) {
        pStrHelloWorld1[j] += 1;
        cout << pStrHelloWorld1[j] << endl;
    }

    // 指向的区域可变
    for (int k = 0; k < 10; ++k) {
        pStrHelloWorld2[k] += 1;
        cout << pStrHelloWorld2[k] << endl;
    }

    return 0;
}