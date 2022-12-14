//
// Created by helisi on 2022/9/25.
//
#include <iostream>
#include <math.h>

using namespace std;

const static int length = 10;
// 多层循环的例子
// 输出所有形如aabb的四位完全平方数
void PrintPerfectSquare(){
    double isQurt = 0;
    int sum = 0;
    for (size_t a = 1; a < 10; ++a) {
        for (size_t b = 0; b < 10; ++b) {
            sum = a * 1100 + b * 11;
            isQurt = sqrt(sum);
            if((isQurt - int(isQurt)) < 0.00000001) // 4.01-4 = 0.01
            {
                cout << sum << endl;
            }
        }
    }
}

// 将多层循环优化成单层循环 并且避免了求平方根操作
void PrintPerfectSquare2()
{
    int sum = 0;
    int high, low = 0;
    for (int i = 0; ; ++i) {
        sum = i * i;
        if(sum < 1000)
        {
            continue;
        }
        if(sum > 9999)
        {
            break;
        }
        high = sum / 100;   // 4567/100 = 45
        low = sum % 100;    // 4567%100 = 67
        if((high / 10 == high % 10) && (low / 10 == low % 10))
        {
            cout << sum << endl;
            cout << i << endl;
        }
    }
}

int main(void)
{

    // todo 1+2+3+...+100
    int sum = 0;
    int index = 1;
    while(index <= 100)
    {
        sum += index;
        index ++;
    }
    cout << "while: " << sum << endl;

    sum = 0;
    for (index = 1; index <= 100; index ++) {
        sum += index;
    }
    cout << "for: " << sum << endl;

    sum = 0;
    index = 1;
    do
    {
        sum += index;
        index ++;
    }while (index <= 100);
    cout << "do/while: " << sum << endl;

    //todo 计算1+2+3+...+100最快的方法

//    PrintPerfectSquare();
    PrintPerfectSquare2();

    return 0;
}