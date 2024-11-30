//
// Created by 37341 on 2024/11/24.
//
#include <iostream>

using namespace std;

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);

int main() {
    double (*fp[3])(double,double) = { add, sub, mul};
    for (int i = 0; i < 3; i++) {
        cout << fp[i](1.0, 0.0) << endl;
    }
    return 0;
}

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}