//
// Created by 37341 on 2024/11/28.
//

#ifndef SALES_H
#define SALES_H

namespace SALES {
    const int QUARTERS = 4;
    struct Sales {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &sales, const double ar[], int n);
    void setSales(Sales &sales);
    void showSales(const Sales &sales);
}

#endif //SALES_H
