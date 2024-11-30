//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;

class People {
public:
    People() {
        cout << "People()无参构造函数调用。" << endl;
    }
    People(int age,int height) {
        m_Age = age;
        m_Height = new int(height);
        cout<<"People(int age)有参构造函数调用。m_Age="<<m_Age<<endl;
    }

    People(const People& people) {
        cout<<"People(const People& people)拷贝构造函数调用"<<endl;
        //默认的拷贝构造函数是浅拷贝，会造成析构函数中内存重复释放的问题
        m_Age = people.m_Age;
        //编译器默认实现是: m_Height=people.m_Height
        m_Height = new int(*people.m_Height);
    }
    ~People() {
        //将堆区开辟的内存回收
        if(m_Height != NULL) {
            delete m_Height;
        }
        cout<<"~People()析构函数调用"<<endl;
    }
    int m_Age;//年龄
    int *m_Height;//身高
};

void testPeople() {
    People p1(18, 180);
    cout<<"p1的年龄为："<<p1.m_Age<<"，身高为："<<*p1.m_Height<<endl;

    People p2(p1);
    cout<<"p2的年龄为："<<p2.m_Age<<"，身高为："<<*p1.m_Height<<endl;
}
int main15() {
    testPeople();
    return 0;
}