//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;
//注意事项
//1.引用必须初始化
//2.引用初始化之后就不能修改
int main04() {
    int a = 10;
    //引用必须初始化
    int &b=a;

    //引用在初始化后无法改变
    int c = 20;
    b=c;
    return 0;
}