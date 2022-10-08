//
// Created by helisi on 2022/9/30.
//
#include <iostream>

int test(int a)
{
    return a;
}

int test(double a)
{
    return int(a);
}

// 默认参数 要么两个参数都设置 要么只设置最后一个参数
// 报错原因 test(1)原本要调用的是test(int a)
// 但是定义这个函数后不知道调用的是test(int a)还是test(int a=3,double b=2.0)
// 编译器可以理解为test(1,double b=2.0)
// 如果一定要定义这样一个函数 需要使用指向函数的指针

// 原
//int test(int a, double b)
//{
//    return a + b;
//}

int test(int a=3, double b=2.0)
{
    return a+b;
}

int main(void)
{
    // 定义函数指针p 返回值类型(*p)(函数参数)
    // 函数的参数(int) 返回值是int
    int(*p)(int);
    p = test;
    int result = (*p)(1);
    result = test(2.0);
    result = test(1, 2.0);
    return 0;
}