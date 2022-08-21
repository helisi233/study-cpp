//
// Created by helisi on 2022/8/16.
//
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    // 创建
    vector<int> vec = {1,2,3,4};
    cout << "size is:" << vec.size() << endl;
    cout << "capacity is:" << vec.capacity() << endl;
    // 尾添加
//    vec.push_back(5);
    vec.insert(vec.end()-1, 5);
    // 遍历
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    cout << "size is:" << vec.size() << endl;
    cout << "capacity is:" << vec.capacity() << endl;

//    vec.pop_back();
    vec.erase(vec.end()-1);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    cout << "size is:" << vec.size() << endl;
    cout << "capacity is:" << vec.capacity() << endl;

    return 0;
}