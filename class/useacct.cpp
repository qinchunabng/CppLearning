//
// Created by 37341 on 2024/11/30.
//
#include <iostream>
#include "account.h"

int main() {
    using namespace std;
    Account acc("John Doe", 1000, "123456");
    acc.show();
    cout << "Withdrawing 500...\n";
    acc.withdraw(500);
    acc.show();

    cout << "Depositing 500...\n";
    acc.deposit(500);
    acc.show();

    return 0;
}