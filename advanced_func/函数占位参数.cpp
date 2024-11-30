//
// Created by 37341 on 2024/11/11.
//
#include <iostream>
using namespace std;

//占位参数
//
void func(int a,int=10) {
    cout<<"this is func"<<endl;
}

int main02() {
    func(10);
    return 0;
}