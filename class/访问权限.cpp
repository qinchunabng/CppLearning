//
// Created by 37341 on 2024/11/12.
//
#include <iostream>
using namespace std;

//访问权限
//三种
//公共权限  public       成员内外都可以访问
//保护权限  protected    成员内可以访问，子类可以访问
//私有权限  private     成员内可以访问

//struct和class唯一区别是默认的访问权限不同
//struct的默认访问权限是公共的
//class默认访问权限是私有的
class C1 {
    int m_A;
};

struct C2 {
    int m_A;
};

class Person {
public:
    string m_Name;
protected:
    string m_Car;
private:
    int m_Password;
public:
    void func() {
        m_Name="张三";
        m_Car="拖拉机";
        m_Password=123456;
    }
};
int main12() {
    Person p;
    p.func();

    p.m_Name= "李四";
    //保护权限和私有权限的属性在类外无法访问
    // p.m_Car="";
    // p.m_Password=11111;

    C1 c1;
    //无法访问m_A，默认是私有的
    // c1.m_A = 1;
    C2 c2;
    //可以访问，默认是共有的
    c2.m_A=10;
    return 0;
}