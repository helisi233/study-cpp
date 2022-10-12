//
// Created by helisi on 2022/10/3.
//
#include <iostream>

using namespace std;

int MaxValue(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    return 0;
}
/*
 * 最简单的main函数
 * MSVC生成的汇编代码
 * int main()
 * {
 *  00C01690    push        ebp
 *      把函数信息放到栈里面，这个寄存器要保存一些环境信息，此时ebp地址00D0FD50 esp地址00D0FD40
 *  00C01691    mov         ebp,esp
 *      此时esp的地址0x00D0FD3C ebp的地址0x00D0FD3C
 *  00C01693    sub         esp,0C0h
 *      对esp做减法操作 此时esp的地址0x00D0FC7C 0C0h(h表示十六进制)
 *      正常地址是向下分配，但是栈的地址是想上分配，esp再低地址位置，ebp再高地址位置
 *      此时栈空间有0C0的大小即192（十进制）字节
 *  00C01699    push        ebx
 *      push操作是将信息往栈里面放，压栈操作
 *      将信息压栈
 *      此时esp地址0x00D0FC78
 *  00C0169A    push        esi
 *      执行压栈操作
 *      esi的地址0x00C01046
 *      此时esp地址0x00D0FC74 0x00D0FC74被写入46 10 C0（C++中使用小端法）
 *      esp继续向上增长，栈顶
 *      ebp不变，栈底
 *  00C0169B    push        edi
 *      同esi
 *  00C0169C    lea         edi,[ebp-0C0h]
 *  00C016A2    mov         ecx,30h
 *  00C016A7    mov         eax,0CCCCCCCCh
 *  00C016AC    rep stos    dword ptr es:[edi]
 *      清理栈空间
 *      return 0;
 *  00C016AE    xor         eax,eax
 *      eax^eax 将eax赋为0
 * }
 * 00C016B0     pop         edi
 *      将压入栈的edi弹出
 *      此时esp地址0x00d0fc74
 *      可能发生脏数据情况，栈还没有被完全清除
 * 00C016B1     pop         esi
 *      将压入栈的edi弹出
 *      此时esp地址0x00d0fc78
 *      可能发生脏数据情况，栈还没有被完全清除
 * 00C016B1     pop         ebx
 *      将压入栈的edi弹出
 *      此时esp地址0x00d0fc7C
 *      可能发生脏数据情况，栈还没有被完全清除
 * 00C016B1     mov         esp,ebp
 *      将ebp的值赋给esp
 * 00C016B1     pop         ebp
 *      将ebp弹出，恢复最初的栈信息
 * 00C016B1     ret
 * */

/*
 *  MSVC生成的汇编代码 部分
 *  带函数调用的main
 *  int x = 3, y = 4;
 *  009C16FE mov dword ptr[x],3
 *  009C1705 mov dword ptr[y],4
 *  MaxValue(x,y);
 *  009C170C mov eax,dword ptr[y]
 *  009C170F push eax
 *  009C1710 mov ecx,dword ptr[x]
 *  009C1713 push ecx
 *  009C1714 call MaxValue(09C1348h)
 *  009C1719 add esp,8
 *
 *  return 0;
 *
 *  int MaxValue(int a, int b)
 *  {
 *  009C1690 push ebp
 *  009C1691 mov ebp,esp
 *  009C1693 sub esp,0X4h
 *  009C1699 push ebx
 *  009C169A push esi
 *  009C169B push edi
 *  009C169C lea edi,[ebp-0C4h]
 *  009C16A1 mov ecx,31h
 *  009C16A7 mov eax,0CCCCCCCCh
 *  009C16AC rep stos dword ptr es:[edi]
 *    return (a > b) ? a : b;
 *  009C16AE mov eax,dword ptr[a]
 *  009C16B1 cmp eax,dword ptr[b]
 *  009C16B4 jle MaxValue+31h (09C16C1h)
 *  009C16B6 mov ecx,dword ptr[a]
 *  009C16B9 mov dword ptr [ebp-0C4h],ecx
 *  009C16BF jmp MaxValue+3Ah (09C16CAh)
 *  009C16C1 mov edx,dword ptr[b]
 *  009C16C4 mov dword ptr[ebp-0C4h],edx
 *  }
 * */


















