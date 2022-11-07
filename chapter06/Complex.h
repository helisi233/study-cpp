//
// Created by helisi on 2022/11/8.
//

#ifndef STUDY_CPP_COMPLEX_H
#define STUDY_CPP_COMPLEX_H


class Complex {
public:
    Complex(double r, double i);  // 构造函数
    Complex();  // 默认构造函数 当有自定义构造函数时默认构造函数不显式声明会消失 当没有自定义构造函数时帮用户创建一个默认构造函数
    virtual ~Complex(); // 析构函数

    // 相当于get方法 const修饰的是real这个函数 表示在这个函数体内不允许修改real
    // 让外部获取private属性的变量
    // 这种简单函数可以写在.h文件中 编译器优化的时候可能把它做成内联函数
    double GetReal() const { return _real;}
    double GetImage() const { return _image;}
    void SetReal(double d) {_real = d;}
    void SetImage(double i) {_image = i;}

    // 也可以统一在.h中声明函数 在.cpp中实现
//    double GetReal() const;
//    double GetImage() const;
//    void SetReal(double d);
//    void SetImage(double i);

    // 运算符重载
    // Complex 返回值
    // const修饰右边的Complex Complex是一个引用类型 引用相当于限制的指针 外部传过来直接用
    // 假设已经有一块空间存储了a 另外一块空间存储了b 如果使用const Complex的方式
    // 相当于创建了一块副本 这个副本和b相同 让a和副本相加
    // 传入应用直接使用b 节省空间
    // 加上const表示这个引用不可以修改
    Complex operator+ (const Complex& x);
    Complex& operator= (const Complex& x);


private:
    double _real;   // _或者m作为前缀 表示成员变量 // 复数的实数部分
    double _image;  // 复数的虚部部分
};


#endif //STUDY_CPP_COMPLEX_H
