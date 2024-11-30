//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

int main3() {
    //引用的基本语法
    //数据类型 &别名=原名
    int a = 10;
    //创建引用
    int &b = a;
    cout << a << endl;
    cout << b << endl;

    cout<<"sizeof(a) = "<<sizeof(a)<<endl;
    cout<<"sizeof(b) = "<<sizeof(b)<<endl;
    return 0;
}