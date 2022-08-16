//
// Created by helisi on 2022/8/16.
//
#include <iostream>

using namespace std;

int main(void) {

    int arr[2][4] = {{1,2,3,4},{5,6,7,8}};
    for (int row = 0; row < 2; ++row) {
        for (int col = 0; col < 4; ++col) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}