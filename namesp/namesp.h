//
// Created by 37341 on 2024/11/27.
//

#ifndef NAMESP_H
#define NAMESP_H
#include <string>

namespace pers {
    struct Person {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts {
    using namespace pers;
    struct Debt {
        Person name;
        double amount;
    };

    void getDebt(Debt &debt);
    void showDebt(const Debt &debt);
    double sumDebts(const Debt ar[], int n);
}

#endif //NAMESP_H
