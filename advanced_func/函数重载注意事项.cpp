//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//1.引用作为重载条件
void func(int &a) {
    cout<<"func(int &a)调用"<<endl;
}

void func(const int &a) {
    cout<<"func(const int &a)调用"<<endl;
}

//2.函数重载遇到默认参数
void func1(int a) {
    cout<<"func2(int a)的调用"<<endl;
}
void func1(int a,int b=10) {
    cout<<"func2(int a,int b)的调用"<<endl;
}

int main10() {
    int a = 10;
    //如果传入的是变量，调用的是上面的函数
    func(a);

    //如果传入的是常量，调用下面的函数
    func(10);

    //报错，当函数发生重载带默认参数值，出现二义性，无法确定调用的是哪个函数
    // func2(a);
    return 0;
}