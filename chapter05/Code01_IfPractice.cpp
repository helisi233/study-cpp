//
// Created by helisi on 2022/9/21.
//
#include <iostream>

using namespace std;

// 输入一个年号 判断是否是闰年
bool IsLeapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 判断b是否是a的倍数
bool IsMultiple(int a, int b)
{
    if((a != 0) && b % a == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

typedef enum __COLOR {
    RED,
    GREEN,
    BLUE,
    UNKNOW
}color;

void printColor(color color0)
{
    if(color0 == RED)
    {
        cout << "red" << endl;
    }
    else if(color0 == GREEN)
    {
        cout << "green" << endl;
    }
    else if(color0 == BLUE)
    {
        cout << "blue" << endl;
    }
    else
    {
        cout << "unknow" << endl;
    }
}

int main(void) {
    cout << IsLeapYear(2020) << endl;

    cout << IsMultiple(2, 8) << endl;

    color color0;
    color0 = BLUE;
    printColor(color0);
}