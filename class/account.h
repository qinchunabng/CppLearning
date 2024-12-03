//
// Created by 37341 on 2024/11/30.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account {
private:
    std::string name;
    double balance;
    std::string account;
    public:
    Account(std::string name, double balance, std::string account);
    void show();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif //ACCOUNT_H
