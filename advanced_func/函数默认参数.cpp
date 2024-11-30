//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//函数默认参数
//如果我们传入数据就用传入的数据，如果没有就使用默认参数
//语法：返回值类型 函数名(形参=默认值){}
//注意事项：
//1.默认参数必须放在参数列表的后面
int func(int a,int b=20,int c=30) {
    return a + b + c;
}

//2.函数的声明和实现只能有一个地方有默认参数
int func2(int a=10,int b=10);

int main01() {
    int r = func(10);
    cout << r << endl;

    cout << func2() << endl;
    return 0;
}

int func2(int a,int b) {
    return a + b;
}