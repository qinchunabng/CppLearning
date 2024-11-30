//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

//静态成员分为静态成员变量和静态成员函数
//静态成员变量：
//1.所有对象共享一份数据
//2.在编译阶段分配内存
//3.类内声明，类外初始化编译

//静态成员函数
//1.所有对象共享一个函数
//2.静态成员函数只能访问静态成员变量

class Person3 {
public:
    static int m_A;
    static void func() {
        cout << "静态成员函数func()调用, m_A:" << m_A << endl;
    }
private:
    //静态成员变量也有访问权限
    static int m_B;
    int m_C;
};

//静态变量需要类外初始化否则会编译报错
int Person3::m_A = 100;
int Person3::m_B = 200;

int main18() {
    Person3 p;
    cout << p.m_A << endl;
    //1.通过对象访问，静态变量所有对象共享
    Person3 p2;
    p2.m_A = 200;
    cout << p.m_A << endl;

    p.func();

    //通过类名访问
    cout<<Person3::m_A<<endl;
    Person3::func();
    return 0;
}