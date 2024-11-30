//
// Created by 37341 on 2024/11/21.
//
#include <iostream>
using namespace std;

/**
 * 编写一个程序，最多将 10 个 donation 值读入到一个 double 数组中（如果您愿意，也可使用模板
 * 类 array）。程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于
 * 平均值。
 */
int main() {
    const int SIZE = 10;
    double donation[SIZE];
    double sum = 0;
    int count = 0;
    while(count < SIZE && cin >> donation[count]) {
        sum += donation[count];
        count++;
    }
    if(count > 0) {
        double average = sum / count;
        cout << "average = " << average << endl;
        for (int i = 0; i < count; i++) {
            if(donation[i] > average) {
                cout << donation[i] << " ";
            }
        }
        cout << " are greater than average." << endl;
    }else {
        cout << "You have to enter at least 1 number." << endl;
    }
    return 0;
}