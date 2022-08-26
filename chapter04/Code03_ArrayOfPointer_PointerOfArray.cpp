//
// Created by helisi on 2022/8/26.
//
#include <iostream>

using namespace std;

int main(void) {

    int array[4] = {0, 1, 2, 3};

    // 指向array这个数组的一个指针
    int(*pToArray)[4] = &array;

    // 装载int*的数组
    int* arrayP[4];
    for (int i = 0; i < 4; ++i) {
        arrayP[i] = &(array[i]);
    }

    // 通过arrayP对数组进行遍历
    for (int j = 0; j < 4; ++j) {
        cout << "通过arrayP访问数组    " << (*(arrayP[j])) << endl;
    }

    // 通过pToArray对数组遍历
    for (int k = 0; k < 4; ++k) {
        cout << "通过pToArray访问数组  " << (*pToArray)[k] << endl;
    }

    return 0;
}
