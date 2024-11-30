//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//引用作为函数的返回值
//1.不要范围局部变量的引用
int & test01() {
    //局部变量存在内存区域中的栈区，
    //方法执行结束之后自动释放
    int a = 10;
    return a;
}

int & test02() {
    //静态变量存放在全局区，全局区上的数据在程序结束由系统释放
    static int a = 10;
    return a;
}

int main05() {
    // int &r=test01();
    int &r=test02();
    cout << r << endl;
    cout << r << endl;

    //如果函数返回的是一个引用，函数的调用也可以作为左值
    test02() = 100;
    cout << r << endl;
    cout << r << endl;
    return 0;
}