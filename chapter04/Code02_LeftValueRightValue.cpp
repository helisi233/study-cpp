//
// Created by helisi on 2022/8/24.
//
#include <iostream>

using namespace std;

int main(void) {

    char strHelloWorld[] = {"helloworld"};
    char* pStrHelloWorld = "helloworld";

    pStrHelloWorld = strHelloWorld;
//  ERROR  strHelloWorld = pStrHelloWorld;

    return 0;
}
