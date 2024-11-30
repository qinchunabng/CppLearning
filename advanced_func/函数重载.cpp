//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//函数名可以相同，提供复用性

//函数重载条件：
//1.同一个作用域下
//2.函数名相同
//3.函数参数类型不同或个数不同或顺序不同

//注意：函数的返回值是不可以作为重载条件

void func() {
    cout<<"func的调用"<<endl;
}

void func(int a) {
    cout<<"func(int a)的调用"<<endl;
}

int main03() {
    func(10);
    return 0;
}