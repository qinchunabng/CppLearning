//
// Created by 37341 on 2024/12/1.
//
#include <iostream>
#include "list.h"

void print(Item &item) {
    std::cout << item << " ";
}

int main() {
    List list;
    // 插入元素
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    // 遍历并打印元素
    list.visit(print);
    return 0;
}