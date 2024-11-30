//
// Created by 37341 on 2024/11/24.
//
#include <iostream>

int factorial(int n);

int main() {
    using namespace std;
    int number;
    cout << "Enter a number: ";
    while (cin >> number && number > 0) {
        cout << number << "! = " << factorial(number) << endl;
        cout << "Enter a number: ";
    }
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}