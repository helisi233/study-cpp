//
// Created by helisi on 2022/8/21.
//
#include <iostream>
#include <string.h>

using namespace std;
const int MAX_LEN_NUM = 16;

int main(void) {

    char strHelloWorld[11] = {"helloworld"};
    cout << strlen(strHelloWorld) << endl;
    cout << sizeof(strHelloWorld) << endl;

    char strHelloWorld2[] = {"helloworld"};
    char strHelloWorld3[] = {"hflloworld"};
    char strHelloWorld4[] = {"hdlloworld"};
    cout << strcmp(strHelloWorld, strHelloWorld2) << endl;
    cout << strcmp(strHelloWorld, strHelloWorld3) << endl;
    cout << strcmp(strHelloWorld, strHelloWorld4) << endl;

    char strHW1[] = {"hello"};
    char strHW2[] = {"world"};
    char strHW3[MAX_LEN_NUM] = {0};
    strcpy(strHW3, strHW2);
    strncpy(strHW3, strHW1, 2);
    strcat(strHW3, strHW1);
    unsigned int len = strlen(strHW3);
//    unsigned int len = sizeof(strHW3) / sizeof(strHW3[0]);
    for (unsigned int i = 0; i < len; ++i) {
        cout << strHW3[i] << " ";
    }
    cout << endl;

    return 0;
}