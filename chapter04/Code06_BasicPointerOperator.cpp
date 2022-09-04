//
// Created by helisi on 2022/9/2.
//
#include <iostream>

using namespace std;

int main(void) {

    char ch = 'a';
    char* cp = &ch;

    char* cp2 = ++cp;
    char* cp3 = cp++;
    char* cp4 = --cp;
    char* cp5 = cp--;

    *++cp2 = 98;
    char ch3 = *++cp2;
    *cp2++ = 98;
    char ch4 = *cp2++;

    int a = 1,b = 2, c, d;
    c = a++ +b;
    char ch5 = ++*++cp;

    return 0;
}