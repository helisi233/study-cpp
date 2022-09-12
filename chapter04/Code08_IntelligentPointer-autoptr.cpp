//
// Created by helisi on 2022/9/13.
//
#include <string>
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // 大括号用来测试 auto_ptr的有效范围
    {
        // 泛型 对int使用
        auto_ptr<int> pl(new int(10));
        cout << *pl << endl;

        // 在C++11只有对指针的判空使用nullptr
        // 基本数据类型还是使用NULL

        // auto_ptr C++17中移除 拥有严格对象所有权语义的智能指针
        // auto_ptr原理 在拷贝赋值过程中 直接剥夺原对象对内存的控制权 转交给新对象
        // 然后再将原对象指针置为nullptr 这种做法也叫管理权转移
        // 当再次去访问原对象时 程序就会报错
        // 很多企业在其库内也是要求不准使用auto_ptr
        auto_ptr<string> languages[5] = {
                auto_ptr<string>(new string("C")),
                auto_ptr<string>(new string("Java")),
                auto_ptr<string>(new string("C++")),
                auto_ptr<string>(new string("Python")),
                auto_ptr<string>(new string("Rust"))
        };
        auto_ptr<string> pC;
        // language[2]失去控制权 所有权从language[2]转让给pC
        pC = languages[2];
        // language[2]不在引用该字符串从而编程空指针
        cout << "There are some computer languages here:\n";

        for (int i = 0; i < 2; ++i) {
            cout << *languages[i] << endl;
        }

        cout << "The winner is " << *pC << endl;

        for (int j = 0; j < 5; ++j) {
            cout << *languages[j] << endl;
        }
    }
    // auto_ptr在大括号内定义 生命周期到大括号结束为止
    // 调用析构函数 自动释放
    return 0;
}