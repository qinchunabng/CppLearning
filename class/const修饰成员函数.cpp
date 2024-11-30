//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

//常函数：
//1.成员函数后加上const后就称为常函数
//2.常函数内不可以修改成员属性
//3.成员属性声明时加关键字mutable,在常函数中依然可以修改

//常对象：
//1.声明对象前加const对象成为常对象
//2.常对象只能调用常函数

class Person7 {
public:
    //this指针的本质是指针常量，指针的指向是不可以修改的
    //在成员函数后面加上const，修饰是this指针，让指针指向的值也不可以修改
    void showPerson() const{
        //无法修改
        // this->m_A = 100;
        this->m_B=100;
    }

    void func() {

    }

    int m_A;
    mutable int m_B;//特殊变量，在常函数中也可以修改
};
int main() {
    //声明常对象
    const Person7 p;
    //无法修改
    // p.m_A=100;
    //可以修改
    p.m_B=100;

    p.showPerson();
    //无法调用普通函数，因为普通成员函数可以修改属性
    // p.func();
    return 0;
}