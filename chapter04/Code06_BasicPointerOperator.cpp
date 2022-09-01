//
// Created by helisi on 2022/9/2.
//
#include <iostream>

using namespace std;

int main(void) {

    char ch = 'a';
    // &ch = 97; &ch左值不合法
    char* cP = &ch; // &ch右值

    // &cP = 97; &cP左值不合法
    char** cPP = &cP; // &cP右值

    *cP = 'a';  // *cp左值取变量ch的位置
    char ch2 = *cP;  // *cP右值取变量ch存储的值 赋值给ch2
    // *cP+1 = 'a'; *cP+1左值不合法
    ch2 = *cP + 1;   // 将*cP取到的值加一 然后赋值ch2
    *(cP+1) = 'a';   // *(cP+1)左值语法上合法 取ch后面的位置
    ch2 = *(cP+1);   // 取出ch后面位置的值 然后赋值给ch2

    return 0;
}