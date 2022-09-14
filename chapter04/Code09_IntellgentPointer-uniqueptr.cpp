//
// Created by helisi on 2022/9/13.
//
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // unique_ptr
    // auto自动推导类型
    auto w = std::make_unique<int>(10);
    // 获取到指向堆的哪个指针 解引用
    cout << *(w.get()) << endl;

    // ERROR auto w2 = w; 编译错误如果想把w赋值给w2 是不可以的
    // 因为复制从语义上来说 两个对象讲共享一块内存

    // unique_ptr只支持移动语义
    // w2获得内存所有权 w此时等于nullptr
    auto w2 = std::move(w);
    cout << ((w.get() != nullptr) ? (*(w.get())) : -1) << endl;
    cout << ((w2.get() != nullptr) ? (*(w2.get())) : -1) << endl;

    {
        // i这个unique_ptr指针 在栈中分配
        // 指向了堆中的--new int(10)
        // 超过这个大括号i这个指针就失效了
        // 当超过大括号后 堆上分配的new int(10)没有指针指向它 这块空间会被释放掉
        auto i = unique_ptr<int>(new int(10));
        cout << *i << endl;
    }

    return 0;
}