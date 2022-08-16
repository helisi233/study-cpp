//
// Created by helisi on 2022/8/16.
//
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    // 创建
    vector<int> vec = {1,2,3,4};
    // 尾添加
    vec.push_back(5);
    // 遍历
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << vec.capacity() << endl;

    return 0;
}