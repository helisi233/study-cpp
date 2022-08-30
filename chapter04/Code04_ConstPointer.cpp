//
// Created by helisi on 2022/8/26.
//
#include <iostream>
#include <sec_api/string_s.h>

using namespace std;
unsigned int MAX_LEN = 11;

int main(void) {

    char strHelloWorld[] = {"helloworld"};

    // const左侧最近的部分char const修饰这个char
    // pstr1指向的内容是可以改变的 但是被指向的内容不可以改变
    char const *pstr1 = "helloworld";

    // const左侧最近的部分char* const修饰这个char*
    // pstr2指向的内容(另一个变量的地址)是不能改变的 但是被指向的内容可以改变
    char* const pstr2 = strHelloWorld;

    // pstr3指向的内容不可以改变 被指向的内容也不可以改变
    char const* const pstr3 = "helloworld";

    // 可以修改
    pstr1 = strHelloWorld;
//  ERROR 不可修改 pstr2 = strHelloWorld;
//  ERROR 不可修改  pstr3 = strHelloWorld;

    unsigned int len = strnlen_s(pstr2, MAX_LEN);
    cout << len << endl;
    for (unsigned int index = 0; index < len; ++index) {
//      ERRPR pstr1不可以修改被指向的内容  pstr1[index] += 1;
        pstr2[index] += 1;
//      ERROR pstr3不可以修改被指向的内容  pstr3[index] += 1;
    }

    for (unsigned int index = 0; index < len; ++index) {
        cout << pstr1[index] << " ";
    }

    return 0;
}
