//
// Created by helisi on 2022/8/26.
//
#include <iostream>

using namespace std;

int main(void) {

    int array[4] = {0, 1, 2, 3};

    // ָ��array��������һ��ָ��
    int(*pToArray)[4] = &array;

    // װ��int*������
    int* arrayP[4];
    for (int i = 0; i < 4; ++i) {
        arrayP[i] = &(array[i]);
    }

    // ͨ��arrayP��������б���
    for (int j = 0; j < 4; ++j) {
        cout << "ͨ��arrayP��������    " << (*(arrayP[j])) << endl;
    }

    // ͨ��pToArray���������
    for (int k = 0; k < 4; ++k) {
        cout << "ͨ��pToArray��������  " << (*pToArray)[k] << endl;
    }

    return 0;
}
