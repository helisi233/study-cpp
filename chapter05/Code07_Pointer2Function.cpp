//
// Created by helisi on 2022/10/3.
//
#include <iostream>

using namespace std;

// 函数只能定义在另一个函数外面
// MaxValue、MinValue、Add这三个函数参数列表、返回值都相同
int MaxValue(int x, int y)
{
    return (x > y) ? x : y;
}
int MinValue(int x, int y)
{
    return (x > y) ? y : x;
}
int Add(int x, int y)
{
    return x+y;
}

// int(*p)(int a, int b) 回调函数
// 具体调用函数再函数体内部
bool ProcessNum(int x, int y, int(*p)(int a, int b))
{
    cout << p(x, y) << endl;
    return true;
}

int main(void)
{
    int x = 10, y = 20;
    cout << ProcessNum(x, y, MaxValue) << endl;
    cout << ProcessNum(x, y, MinValue) << endl;
    cout << ProcessNum(x, y, Add) << endl;
    return 0;
}