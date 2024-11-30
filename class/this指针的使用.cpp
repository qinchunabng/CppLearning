//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

//this指针的用途
//1.解决名称的冲突
//2.返回对象本身用*this

class Person5 {
public:
    int age;
    Person5(int age) {
        this->age = age;
    }

    Person5& AddAge(Person5 &p) {
         this->age += p.age;
        return *this;
    }
};

int main20() {
    Person5 p(18);
    cout <<"p的年龄为："<< p.age << endl;

    Person5 p2(10);
    p2.AddAge(p).AddAge(p);
    cout <<"p2的年龄为："<< p2.age<<endl;
    return 0;
}