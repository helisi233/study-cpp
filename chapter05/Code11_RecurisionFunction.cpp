//
// Created by helisi on 2022/10/17.
//
#include <iostream>
#include <assert.h>

int g_a[1000]; // 全局数组，存储前1000个斐波那契数

using namespace std;

int Fib(int num)
{
    if(num == 0)
    {
        return 0;
    }else if(num == 1)
    {
        return 1;
    }else
    {
        // 此处回保存多个堆栈信息
        /*
         *  汇编代码    发生多次调用 寄存器频繁保存新的信息
         *  main()中的汇编
         *      push    0Ah     压栈的方式传递参数
         *      call    Fib(0B41005h)
         *      add     esp, 4  函数调用后，恢复调用前的状态
         *  调用Fib()
         *  if(n == 0)
         *      cmp     dword ptr[n], 0     判断入参是否等于0
         *      jne     Fib+2Ah(0B417EAh)   入参不等于0，跳到0B417EAh位置执行
         *  if(n == 1)
         *      cmp     dword ptr[n], 1     判断入参是否等于1
         *      jne     Fib+39h(0B417F9h)   入参不等于1，跳到0B417F9h位置执行
         *  Fib(num - 1) + Fib(num - 2)
         *      mov     eax,dword ptr[n]
         *      sub     eax,1
         *      push    eax
         *      call    Fib(0B41005h)       再次调用函数，发生递归，保存新的Fib堆栈信息
         * */
        return Fib(num - 1) + Fib(num - 2);
    }
}

// 尾递归优化
int Fib2(int num, int ret0, int ret1)
{
    if(num == 0)
    {
        return ret0;
    }else if(num == 1)
    {
        return ret1;
    }
    // 尾递归不会保留堆栈信息
    /*
     *  尾递归汇编代码，编译器把递归优化成了循环
     *  return Fib2(n-1, ret1, ret0+ret1); 没有发生call
     *  lea     eax,[edx+esi]
     *  mov     edx,esi
     *  mov     esi,eax
     *  sub     ecx,1
     *  jne     Fib2+11h(0AA1520h)
     * */
    return Fib2(num - 1, ret1, ret0 + ret1);
}

// 循环优化递归
int Fib3(int num)
{
    if(num < 2)
    {
        return num;
    }
    int n0 = 0,n1 = 1;
    int temp;
    for (int i = 2; i <= num; ++i) {
        temp = n0;
        n0 = n1;
        n1 = temp + n1;
    }
    return n1;
}

int Fib4(int num)
{
    assert(num >= 0);
    g_a[0] = 0;
    g_a[1] = 1;
    for (int i = 2; i <= num; ++i)
    {
        if(g_a[i] == 0)
        {
            g_a[i] = g_a[i-2] + g_a[i-1];
        }
    }
    return g_a[num];
}

int main(void)
{
//    cout << Fib(10) << endl;
//    cout << Fib2(10, 0, 1) << endl;
//    cout << Fib3(10) << endl;
//    cout << Fib4(10) << endl;
    assert(Fib4(10) == 55);
    return 0;
}