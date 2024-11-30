//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//空指针：指针变量指向内存中编号为0的空间
//用途：初始化指针变量
//注意：空指针指向的内存不可以访问
int main2() {
    int *p= NULL;
    //空指针无法进行访问
    //0~255之间的内存编号是系统占用的，因此不可以访问
    // *p=100;

    //野指针：指针指向非法的内存空间
    //将指针指向内存中任意的内存地址
    int *p1 = (int *)0x1100;
    cout<<*p1<<endl;
    return 0;
}