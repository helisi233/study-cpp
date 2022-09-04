//
// Created by helisi on 2022/9/4.
//
#include <iostream>
#include <sec_api/string_s.h>

using namespace std;

int a = 0;  // GVAR 全局初始化区
int* p1;    // bss 全局未初始化区

int main(void) {    // text代码区

    int b;  // stack 栈区变量
    char s[] = "abc";   // stack 栈区变量
    int* p2 = NULL;    // stack 栈区变量
    char* p3 = "123456";    // 123456\0在常量区 p3在stack栈区
    static int c = 0;   // GVAR 全局(静态)初始化区
    p1 = new int(10);   // heap 堆区变量
    p2 = new int(20);   // heap 堆区变量
    char* p4 = new char[7]; // heap 堆区变量
    strcpy_s(p4, 7, "123456");  // text代码区

    return 0;   // text代码区
}