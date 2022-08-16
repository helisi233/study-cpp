//
// Created by helisi on 2022/8/16.
//
#include <iostream>

using namespace std;

int main(void) {

    int arr[4] = {1,2,3,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; ++i) {
        if(arr[i] == 3) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}