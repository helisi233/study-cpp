//
// Created by helisi on 2022/10/3.
//
#include <iostream>

using namespace std;

int test(int a)
{
    return a;
}

namespace quickhe
{
    int test(int a)
    {
        return a+1;
    }
}

int main(void)
{
    int(*p)(int);
    p = test;
    cout << (*p)(1) << endl;
    cout << test(1) << endl;
    cout << quickhe::test(1) << endl;
    return 0;
}