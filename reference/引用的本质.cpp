//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

int main06() {
    //引用的本质是指针常量，指针常量引用不可以发生改变，指向的值可以发生改变
    int a = 10;
    //自动转换为int *const f=a;
    int &f=a;
    //自动转换为*f=20;
    f=20;
    cout << f << endl;
    cout << a << endl;
    return 0;
}