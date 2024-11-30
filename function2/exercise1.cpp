//
// Created by 37341 on 2024/11/25.
//
#include <iostream>

/**
 * 编写通常接受一个参数（字符串的地址），并打印该字符串的函数。然而，如果提供了第二个参数
 * （int 类型），且该参数不为 0，则该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打印
 * 次数不等于第二个参数的值，而等于函数被调用的次数）
 * @return
 */

void print(char *sp, int& n);

int main() {
    int times = 0;
    char *sp = "hello world";
    print(sp, times);
    print(sp, times);
    print(sp, times);
    return 0;
}

void print(char *sp, int& n) {
    if(n < 0) {
        n = 0;
    }
    n++;
    for(int i = 0; i < n; i++) {
        std::cout << sp << std::endl;
    }
}