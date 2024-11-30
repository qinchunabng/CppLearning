//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

class Person4 {
    int m_A; //非静态成员变量，属于类的对象上
    static int m_B; //静态成员变量，不属于类的对象上
    void func(){} //非静态成员函数，不属于类的对象上
    static void func2(){} //静态成员函数，不属于类的对象上
};

int Person4::m_B = 0;

int main19() {
    Person4 p;
    //空对象占用内存空间为1
    //C++编译器会为每个空对象分配一个字节空间，为了空对象占内存的位置
    //每个空对象也占有一个独一无二的地址
    cout<<"sizeof(p) = "<<sizeof(p)<<endl;
    cout<<"sizeof(Person4) = "<<sizeof(Person4)<<endl;

    return 0;
}