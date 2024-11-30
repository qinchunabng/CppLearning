//
// Created by 37341 on 2024/11/12.
//
#include <iostream>
using namespace std;

//默认情况下，C++编译器至少会给一个类添加3个函数
//1.默认无参构造函数，函数体为空
//2.默认析构函数，函数体为空
//3.默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则如下：
//1.如果用户定义了有参构造函数，C++不再提供默认无参构造函数，但是会提供默认拷贝构造函数
//2.如果用户定义了拷贝构造函数，C++不会再提供其他构造函数

//对象的初始化和清理
//1.构造函数进行初始化
class Bro {
private:
    int m_a;
public:
    Bro() {
        cout<<"Bro()构造函数"<<endl;
    }
    Bro(int a) {
        m_a = a;
        cout<<"Bro(int a)有参构造函数"<<endl;
    }

    Bro(const Bro& b) {
        cout<<"Bro(const Bro& b)拷贝构造函数"<<endl;
    }

    ~Bro() {
        //对象销毁时调用
        cout<<"~Bro()调用"<<endl;
    }
};

void test03() {
    Bro b;//无参构造函数

}

int main14() {
    test03();
    Bro b(10);//有参构造函数
    Bro b1(b);//拷贝构造函数

    //显式调用
    Bro b2 = Bro();
    Bro b3 = Bro(10);
    Bro b4 = b3;

    //匿名对象特点：当前执行结束后，系统自动回收对象
    //注意事项：不要使用拷贝构造函数初始化匿名对象，编译器会认为Bro(b1) === Bro b1
    Bro(10);
    cout<<"aaa"<<endl;

    //隐式转换
    Bro b5= 10;//相当于Bro b5=Bro(10)
    Bro b6 = b5;//相当于Bro b6=Bro(b5)

    return 0;
}