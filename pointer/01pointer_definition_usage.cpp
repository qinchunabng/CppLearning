#include <iostream>
using namespace std;

int main(){
    //1. 声明指针并给指针赋值
    int a = 10,b=20;
    int *p=&a;
    cout<<"a变量的地址:"<<&a<<endl;
    cout<<"p的值"<<p<<endl;

    //2.常量指针
    //特点：指针的指向可以修改，指针的值不可以修改
    const int *cp=&a;
    // *cp=20; 
    cp=&b;
    return 0;
}