#include <iostream>
using namespace std;

int main(){
    //1. 声明指针并给指针赋值
    int a = 10,b=20;
    int *p=&a;
    cout<<"a变量的地址:"<<&a<<endl;
    cout<<"p的值"<<p<<endl;

    //2.常量指针(const修饰指针)
    //特点：指针的指向可以修改，指针的值不可以修改
    const int *cp=&a;
    // *cp=20; 
    cp=&b;

    //3.指针常量(const修饰常量)
    //特点：指针的指向不可修改，指针的指向的值可以修改
    int * const cp1 = &a;
    // cp1=&b;
    *cp1=20;

    //4.const即修饰指针又修饰常量
    //特点：指针的指向和指针指向的值都不可以修改
    const int * const cp2 = &a;
    // *cp2=20;
    // cp2=&b;

    return 0;
}