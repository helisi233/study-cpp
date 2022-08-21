//
// Created by helisi on 2022/8/21.
//
#include <iostream>
#include <string.h>

using namespace std;
const unsigned int MAX_LEN_NUM = 16;
const unsigned int STR_LEN_NUM = 7;
const unsigned int NUM_TO_COPY = 2;

int main(void) {

    char str1[] = {"hello"};
    char str2[STR_LEN_NUM] = {"world1"};
    char str3[MAX_LEN_NUM] = {0};

    strcpy_s(str3, MAX_LEN_NUM, str1);
    strncpy_s(str3, MAX_LEN_NUM, str2, NUM_TO_COPY);
    strcat_s(str3, MAX_LEN_NUM, str2);
    unsigned int len = strnlen_s(str3, MAX_LEN_NUM);
    for (unsigned int i = 0; i < len; ++i) {
        cout << str3[i] << " ";
    }
    cout << endl;
    strcat_s(str2, STR_LEN_NUM, "welcome to c++");
    len = strnlen_s(str2, STR_LEN_NUM);
    for (unsigned int j = 0; j < len; ++j) {
        cout << str2[j] << " ";
    }

    return 0;
}