//
// Created by helisi on 2022/9/19.
//
#include <iostream>
#include <memory>

using namespace std;

// 循环引用的问题
// pb指向B pa指向A 存在循环引用 根据shared_ptr引用计数的原理 pa和pb都无法被正常释放
struct B;
struct A {
    shared_ptr<B> pb;
    // 析构方法
    ~A()
    {
        cout << "~A()" << endl;
    }
};
struct B{
    shared_ptr<A> pa;
    ~B()
    {
        cout << "~B()" << endl;
    }
};

// weak_ptr是为了解决shared_ptr双向引用的问题
struct BW;
struct AW
{
    shared_ptr<BW> pb;
    ~AW()
    {
        cout << "~AW()" << endl;
    }
};
struct BW
{
    weak_ptr<AW> pa;
    ~BW()
    {
        cout << "~BW()" << endl;
    }
};

void Test()
{
    cout << "Test shared_ptr and shared_ptr" << endl;
    shared_ptr<A> tA(new A());
    shared_ptr<B> tB(new B());
    cout << tA.use_count() << endl;
    cout << tB.use_count() << endl;
    tA->pb = tB;
    tB->pa = tA;
    // 发生内存泄露 无法进入到析构函数
    cout << tA.use_count() << endl;
    cout << tB.use_count() << endl;
}

void Test2()
{
    cout << "Test weak_ptr and shared_ptr" << endl;
    shared_ptr<AW> tA(new AW());
    shared_ptr<BW> tB(new BW());
    cout << tA.use_count() << endl;
    cout << tB.use_count() << endl;
    tA->pb = tB;
    tB->pa = tA;
    // 在主函数中超过函数定义域 将调用析构函数
    cout << tA.use_count() << endl;
    cout << tB.use_count() << endl;
}

int main(void) {
//    Test();
    Test2();
    return 0;
}