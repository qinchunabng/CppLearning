//
// Created by 37341 on 2024/11/30.
//
#include <iostream>
#include "account.h"

Account::Account(std::string name, double balance, std::string account) {
    this->name = name;
    this->balance = balance;
    this->account = account;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        std::cout << "You can't withdraw more than " << amount << std::endl;
    } else {
        balance -= amount;
    }
}

void Account::show() {
    std::cout << "Name: " << name;
    std::ios_base::fmtflags oldFlag = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize oldPrec = std::cout.precision(2);
    std::cout << ", Balance: " << balance;
    std::cout << ", Account: " << account << std::endl;
    std::cout.setf(oldFlag, std::ios_base::floatfield);
    std::cout.precision(oldPrec);
}