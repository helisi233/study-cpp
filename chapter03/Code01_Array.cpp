//
// Created by helisi on 2022/8/16.
//
#include <iostream>

using namespace std;

int main(void) {

    int arr1[10] = {1,2,3,4,5,6,7,8};
    int arr2[10] = {1,2,3,4,5,6,7,8,0,0};

    for (int index = 0; index < 10; ++index) {
        cout << arr1[index] << " ";
    }
    cout << endl;
    for (int index = 0; index < 10; ++index) {
        cout << arr2[index] << " ";
    }
    cout << endl;
    cout << arr1[-1] << endl;
    cout << arr2[10] << endl;

    return 0;
}