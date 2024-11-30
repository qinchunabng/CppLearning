//
// Created by 37341 on 2024/11/19.
//
#include <iostream>
using namespace std;

int main() {
    int rows = 0;
    cout << "Enter the number of rows:";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << ".";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}