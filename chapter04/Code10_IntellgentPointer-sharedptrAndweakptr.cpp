//
// Created by helisi on 2022/9/15.
//
#include <iostream>
#include <memory>

using namespace std;

int main(void) {

//    {
//        auto wA = shared_ptr<int>(new int(20));
//        {
//            auto wA2 = wA;
//            cout << ((wA2.get() != nullptr) ? (*(wA2.get())) : -1) << endl;
//            cout << ((wA.get() != nullptr) ? (*(wA.get())) : -1) << endl;
//            cout << wA2.use_count() << endl;
//            cout << wA.use_count() << endl;
//        }
//        // wA2超过作用域消失 wA的引用计数-1
//        cout << wA.use_count() << endl;
//        cout << ((wA.get() != nullptr) ? (*(wA.get())) : -1) << endl;
//    }

    // move语法
    auto wAA = std::make_shared<int>(30);
    // 控制权转移到wAA2中 此时wAA为nullptr
    auto wAA2 = std::move(wAA);
    cout << ((wAA.get() != nullptr) ? (*(wAA.get())) : -1) << endl;
    cout << ((wAA2.get() != nullptr) ? (*(wAA2.get())) : -1) << endl;
    cout << wAA.use_count() << endl;
    cout << wAA2.use_count() << endl;

    return 0;
}