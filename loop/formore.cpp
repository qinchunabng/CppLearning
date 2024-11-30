//
// Created by 37341 on 2024/11/18.
//
#include <array>
#include <iostream>
using namespace std;

const int ArSize = 20;

int main() {
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1.0F;
    for (int i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i - 1];
    }
    for(int i = 0; i < ArSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }
    return 0;
}