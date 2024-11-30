//
// Created by 37341 on 2024/11/24.
//
#include <iostream>
using namespace std;

void average(const int a, const int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    while(cin >> a >> b && a != 0 && b != 0) {
        average(a, b);
        cout << "Enter two numbers: ";
    }
    return 0;
}

void average(const int a, const int b) {
    double average = 0.0;
    average = 2.0 * a * b / (a + b);
    cout << "Average = " << average << endl;
}