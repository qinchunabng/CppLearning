//
// Created by 37341 on 2024/11/30.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <cstdio>

namespace cs {
    const int NAME_LEN = 35;

    struct Customer {
        char fullname[NAME_LEN];
        double payment;
    };

    void show(Customer &c) {
        printf("Full name: %s, payment: %.2f\n", c.fullname, c.payment);
    }
}
#endif //CUSTOMER_H
