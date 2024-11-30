//
// Created by 37341 on 2024/11/13.
//
#include <iostream>
using namespace std;
#include <string>

//类作为类的成员类型
//构造函数和析构函数调用顺序：
//成员类构造函数->当前类构造函数->当前类析构函数->成员类析构函数
class Phone {
public:
    string m_PhoneName;
    Phone(const string &phoneName) {
        m_PhoneName = phoneName;
        cout<<"Phone构造函数"<<endl;
    }
    ~Phone() {
        cout<<"Phone析构函数"<<endl;
    }
};

class Person2 {
public:
    //姓名
    string m_Name;
    //手机
    Phone m_Phone;
    Person2(const string &name, const string &phoneName) :m_Name(name), m_Phone(phoneName) {
        cout << "Person2::Person2(const string &name, const Phone &phone)构造函数" << endl;
    }

    ~Person2() {
        cout << "Person2::~Person2()析构函数" << endl;
    }
};

int main17() {
    Person2 p("张三", "HUAWEI Mate20");
    cout<<p.m_Name<<"拿着"<<p.m_Phone.m_PhoneName<<endl;
    return 0;
}