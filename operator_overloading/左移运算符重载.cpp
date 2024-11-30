//
// Created by 37341 on 2024/11/14.
//
#include <iostream>
using namespace std;

class Student {
    friend ostream & operator<<(ostream &cout, Student &student);
private:
    int m_A;
    int m_B;
public:
    Student(int a, int b);
};

Student::Student(int a, int b):m_A(a),m_B(b) {

}


//只能应用全局函数重载左移运算符，因为成员函数无法实现cout在左侧
ostream & operator<<(ostream &cout, Student &student) {
    cout<<student.m_A<<" "<<student.m_B<<endl;
    //返回cout引用以支持链式调用
    return cout;
}

int main() {
    Student s(10,20);
    cout<<s<<"hello"<<endl;
    return 0;
}