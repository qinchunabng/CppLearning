//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

/**
 * 1．编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）
所有整数的和。这里假设先输入较小的整数。例如，如果用户输入的是 2 和 9，则程序将指出 2～9 之间所
有整数的和为 44。

 * @return
 */
int main() {
    int num1, num2;
    int sum = 0;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++) {
       sum += i;
    }
    cout << "sum:" << sum << endl;
    return 0;
}