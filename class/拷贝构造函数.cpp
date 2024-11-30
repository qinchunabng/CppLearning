//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

//拷贝构造函数调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.值方式放回局部对象

class Stuff {
    int m_Age;
    public:
    Stuff() {
        cout << "Stuff()默认构造函数调用" << endl;
    }

    Stuff(int age) {
        m_Age = age;
        cout<<"Stuff(int age)有参数构造函数调用，m_Age="<<m_Age<<endl;
    }

    Stuff(const Stuff& stuff) {
        m_Age = stuff.m_Age;
        cout<<"Stuff(const Stuff& stuff)拷贝构造函数调用，m_Age="<<m_Age<<endl;
    }

    ~Stuff() {
        cout<<"~Stuff()析构函数调用"<<endl;
    }
};

//实参传给形参发生值传递，会调用拷贝构造函数
void doWork(Stuff s) {

}

Stuff doWork2() {
    Stuff s;
    cout<<"s="<<&s<<endl;
    return s;
}

void testConstructor() {
    // Stuff s1(20);
    // Stuff s2(s1);
    // doWork(s1);
    Stuff s3= doWork2();
    cout<<"s3="<<&s3<<endl;
}


int main13() {
    testConstructor();

    return 0;
}