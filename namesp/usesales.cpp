//
// Created by 37341 on 2024/11/28.
//
#include <iostream>
#include "sales.h"

int main() {
    using namespace std;
    using namespace SALES;
    Sales s1;
    double ar[4] = {1, 2, 3, 4};
    setSales(s1, ar, 4);
    showSales(s1);

    Sales s2;
    setSales(s2);
    showSales(s2);
    return 0;
}