//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

//空指针调用成员函数
class Person6 {
public:
    void showClassName() {
        cout<< "this is Person6 class"<<endl;
    }
    void showAge() {
        //预防空指针
        if(this == NULL) return;
        cout<<"age="<<age<<endl;
    }
    int age;
};

int main21() {
    Person6 *p=NULL;
    p->showClassName();
    //空指针对象调用该函数会报错，因为在函数中，调用成员变量时，会默认加上this指针
    p->showAge();
    return 0;
}