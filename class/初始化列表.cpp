//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

class Person1 {
public:
    int m_A;
    int m_B;
    int m_C;
    //传统初始化操作
    // Person1(int A, int B, int C) {
    //     m_A = A;
    //     m_B = B;
    //     m_C = C;
    // }

    Person1():m_A(10),m_B(20),m_C(30)
    {

    }

    Person1(int a,int b,int c):m_A(a),m_B(b),m_C(c) {

    }
};

int main16() {
    Person1 p1(10,20,30);
    cout <<"p1.m_A" <<p1.m_A << endl;
    cout <<"p1.m_B" <<p1.m_B << endl;
    cout <<"p1.m_C" <<p1.m_C << endl;

    Person1 p2;
    cout <<"p2.m_A" <<p2.m_A << endl;
    cout <<"p2.m_B" <<p2.m_B << endl;
    cout <<"p2.m_C" <<p2.m_C << endl;
    return 0;
}