//
// Created by helisi on 2022/8/21.
//
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    // 字符串定义
    string s1; // 定义空字符串
    string s2 = "helloworld"; // 定义并初始化
    string s3("helloworld");
    string s4 = string("helloworld");

    // 获取字符串长度
    cout << s1.length() << endl;
    cout << s1.size() << endl;
    cout << s1.capacity() << endl;

    // 字符串比较
    s1 = "hello", s2 = "world";
    cout << (s1 == s2) << endl;
    cout << (s1 != s2) << endl;

    // C风格字符串
    const char *c_str1 = s1.c_str();
    cout << "the c-style string c_str1 is: " << c_str1 << endl;

    // 随机访问
    cout << s1[0] << endl;

    string s5 = s1 + s2;
    s1 += s2;
    cout << s5 << endl;
    cout << s1 << endl;

    return 0;
}