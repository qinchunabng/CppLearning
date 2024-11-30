//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

void showValue(const int& value) {
    // value=1000;
    cout << "value: " << value << endl;
}

int main07() {
    //常量引用
    //使用场景：用来修饰形参，防止误操作

    //必须引用一块合法的内存空间
    //加上const之后，编译器将代码修改为：int temp=10; const int &ref=temp;
    const int &ref=10;
    //加上const之后变成只读不可修改
    // ref=20;

    int a=100;
    showValue(a);
    return 0;
}