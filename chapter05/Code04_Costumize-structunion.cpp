//
// Created by helisi on 2022/9/25.
//
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    union Score
    {
        // 使用同一块空间 占用8字节
        double ds;
        char level;
    };

    struct Student
    {
        char name[6];
        int age;
        Score s;
    };

    cout << sizeof(Score) << endl;
    cout << sizeof(Student) << endl;

    Student s1;
    strcpy(s1.name, "helisi");
    s1.age = 23;
    s1.s.ds = 95.5;
    s1.s.level = 'A';


    return 0;
}