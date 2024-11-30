//
// Created by 37341 on 2024/11/24.
//
#include <iostream>

/**
 * 编写一个程序，要求用户输入最多 10 个高尔夫成绩，并将其存储在一个数组中。程序允许用户提
 * 早结束输入，并在一行上显示所有成绩，然后报告平均成绩。请使用 3 个数组处理函数来分别进行输入、
 *显示和计算平均成绩。
*/
const int Max = 10;

int input(double ar[], int max);
void show(const double ar[], int n);
void average(const double ar[], int n);

int main() {
    using namespace std;
    double score[Max];
    int n = input(score, Max);
    show(score, n);
    average(score, n);
    return 0;
}

int input(double ar[], int max) {
    using namespace std;
    int n = 0;
    cout << "Please a core of the golf: ";
    while(cin >> ar[n++] && n < max) {
        cout << "Please a core of the golf: ";
    }
    return n;
}

void show(const double ar[], int n) {
    using namespace std;
    cout << "The scores is: ";
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}

void average(const double ar[], int n) {
    using namespace std;
    double total = 0.0;
    double average = 0.0;
    for (int i = 0; i < n; i++) {
        total += ar[i];
    }
    average = total / n;
    cout << "The average is: " << average << endl;
}