//
// Created by helisi on 2022/9/25.
//
#include <iostream>

using namespace std;

typedef enum COLOR
{
    RED,
    GREEN,
    BLUE,
    UNKNOW_COLOR
}color;

void WhatColor(color color1)
{
    switch(color1)
    {
        case RED:
        {
            cout << "RED" << endl;
            break;
        }
        case BLUE:
        {
            cout << "BLUE" << endl;
            break;
        }
        case GREEN:
        {
            cout << "GREEN" << endl;
            break;
        }
        default:
        {
            cout << "UNKNOW_COLOR" << endl;
            break;
        }
    }
}

int main(void)
{
    color color1 = GREEN;
    WhatColor(color1);
    return 0;
}