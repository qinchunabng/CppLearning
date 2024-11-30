//
// Created by 37341 on 2024/11/23.
//
#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Please enter your income: ";
    double tax = 0;
    while(cin >> income && income > 0) {
        if(income > 5000 && income <= 15000) {
            tax = income * 0.1;
        }else if(income > 15000 && income <= 35000) {
            tax = 10000 * 0.1 + (income - 15000) * 0.15;
        }else if(income > 35000){
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "tax = " << tax << endl;
        cout << "Please enter your income: ";
    }
}