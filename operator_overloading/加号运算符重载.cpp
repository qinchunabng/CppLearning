//
// Created by 37341 on 2024/11/14.
//
#include <iostream>
using namespace std;

class Person {
public:
    int m_A;
    int m_B;
    Person(){}
    Person(int a, int b) : m_A(a), m_B(b) {

    }
    //成员函数运算符重载
    // Person operator+(Person &p) {
    //     Person temp;
    //     temp.m_A = m_A + p.m_A;
    //     temp.m_B = m_B + p.m_B;
    //     return temp;
    // }
};

//全局函数运算符重载
Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

int main() {
    Person p1(10,10);
    //等同于成员函数重载调用Person p2 = p1.operator+(p1);
    //等同于痊愈函数调用Person p1=operator+(p1,p1)
    Person p2 = p1 + p1;
    cout << "p2.m_A = "<< p2.m_A << endl;
    cout << "p2.m_B = "<< p2.m_B << endl;
    return 0;
}