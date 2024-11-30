//
// Created by 37341 on 2024/11/28.
//
#include <iostream>
#include "sales.h"

namespace SALES {

    void setSales(Sales &sales, const double ar[], const int n) {
        int max = QUARTERS > n? n : QUARTERS;
        int i = 0;
        double total = 0;
        sales.min = ar[0];
        sales.max = ar[0];
        for (i = 0; i < max; i++) {
            sales.sales[i] = ar[i];
            total += sales.sales[i];
            if(sales.min > ar[i]) {
                sales.min = ar[i];
            }
            if(sales.max < ar[i]) {
                sales.max = ar[i];
            }
        }
        sales.average = total / max;
        if(max < QUARTERS) {
            for(; i < QUARTERS; i++) {
                sales.sales[i] = 0;
            }
        }
    }

    void setSales(Sales &sales) {
        double total = 0;
        sales.min;
        sales.max;
        for(int i = 0; i < QUARTERS; i++) {
            std::cout << "Enter sales #" << i + 1 << ": ";
            std::cin >> sales.sales[i];
            if(i == 0) {
                sales.min = sales.sales[i];
                sales.max = sales.sales[i];
            }
            total += sales.sales[i];
            if(sales.min > sales.sales[i]) {
                sales.min = sales.sales[i];
            }
            if(sales.max < sales.sales[i]) {
                sales.max = sales.sales[i];
            }
        }
        while(std::cin.get()!= '\n')
            continue;
        sales.average = total / QUARTERS;
    }

    void showSales(const Sales &sales) {
        for(int i = 0; i < QUARTERS; i++) {
            std::cout << "Sales #" << i + 1 << ": " << sales.sales[i] << std::endl;
        }
        std::cout << "Average: " << sales.average << std::endl;
        std::cout << "Max: " << sales.max << std::endl;
        std::cout << "Min: " << sales.min << std::endl;
    }
}