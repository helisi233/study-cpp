//
// Created by helisi on 2022/10/13.
//
#include <iostream>

using namespace std;

inline int MaxValue(int x, int y)
{
    return (x > y) ? x : y;
}

int main(void)
{
    int x = 3, y = 4;
    MaxValue(x, y);
    return 0;
}

/*
 *  使用内联优化后的汇编代码
 *  MSVC汇编代码
 *      int x = 3, y = 4;
 *  00CC166E mov dowrd ptr [x],3
 *  00CC1675 mov dword ptr [y],4
 *      MaxValue(x, y);
 *  00CC167C mov eax,dword ptr [x]
 *  00CC167F cmp eax,dword ptr [y]
 *  00CC1682 jle main+3Fh (0CC168Fh)
 *  00CC1684 mov ecx,dword ptr[x]
 *  00CC1687 mov dowrd ptr [ebp-0DCh],ecx
 *  00CC168D jmp main+48h (0CC1698h)
 *  00CC168F mov edx,dword ptr [y]
 *  00CC1692 mov dword ptr [ebp-0DCh],edx
 *      return 0;
 *
 *  这段汇编代码和没有使用内联函数的MaxValue(x,y)里面的return (x > y) ? x : y;的汇编代码几乎相同
 *  把核心逻辑直接放到了调用函数的地方
 * */


















