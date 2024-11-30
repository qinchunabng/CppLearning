//
// Created by 37341 on 2024/11/26.
//
#include <iostream>
#include "coordin.h"

int main() {
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next to numbers (q to quit):";
    }
    cout << "Bye!" << endl;
    return 0;
}
