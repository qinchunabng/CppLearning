#include <iostream>
using namespace std;

int main1(){
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

    //在32位操作系统下，指针占用4个字节空间大小，不管是什么数据类型
    //在64位操作系统下，指针占用8个字节空间大小
    cout << "sizeof(int *) = "<<sizeof(int*)<<endl;
    cout << "sizeof(float *) = "<<sizeof(float*)<<endl;
    cout << "sizeof(char *) = "<<sizeof(char*)<<endl;
    cout << "sizeof(double *) = "<<sizeof(double*)<<endl;

    //指针和数组名的区别
    int *arr1=new int[]{1,2,3,4,5,6,7,8,9};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    cout << "sizeof(arr1) = "<<sizeof(arr1)<<endl;
    cout << "sizeof(arr2) = "<<sizeof(arr2)<<endl;

    //释放数据的内存
    delete[] arr1;
    return 0;
}