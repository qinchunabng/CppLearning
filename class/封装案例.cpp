//
// Created by 37341 on 2024/11/12.
//
#include <iostream>
using namespace std;

//设计一个学生类，属性有姓名和学号
//可以给学生和学号赋值，可以显示学生的姓名和学号

class Student {
    public://公共属性
    string m_Name;
    int m_Id;

    //行为
    void showStudent() {
        cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
    }

    void setName(string name) {
        m_Name = name;
    }

    void setId(int id) {
        m_Id = id;
    }
};

int main11() {
    //创建一个学生对象
    Student s1;
    //给对象属性赋值
    s1.setName("张三");
    s1.setId(1);
    s1.showStudent();

    return 0;
}