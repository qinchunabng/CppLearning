//
// Created by 37341 on 2024/12/1.
//
#include <iostream>
#include "mytime2.h"

int main() {
    using std::cout;
    using std::endl;

    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "Weeding time = ";
    weeding.Show();

    cout << "Waxing time = ";
    waxing.Show();

    cout << "Total time = ";
    total = weeding + waxing;
    waxing.Show();

    cout << "Diff time = ";
    diff = weeding - waxing;
    diff.Show();

    adjusted = total * 1.5;
    cout << "Adjusted time = ";
    adjusted.Show();
    return 0;
}