//
// Created by helisi on 2022/9/25.
//
#include <iostream>

using namespace std;

int main(void)
{
    // 声明wT类型
    enum wT{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    // 定义一个wT类型的变量
    wT weekday;
    weekday = Monday;
    weekday = Sunday;
//    weekday = 0;  ERROR 对于enum只能赋值enum里面定义的变量
//  实际上Monday这些值也是int 但是不能直接用int给wT类型赋值
    cout << weekday << endl;
    // 使用int需要使用类型转换，一般不要使用这种方式给enum赋值
    weekday = wT(3);
//    Monday = 0;   ERROR   类型值不能做左值
    int a = Wednesday;
    cout << a << endl;

    return 0;
}