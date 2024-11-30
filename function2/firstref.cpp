//
// Created by 37341 on 2024/11/24.
//
#include <iostream>

int main() {
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats = " << rats;
    cout << ",rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ",rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ",rodents address = " << &rodents << endl;
    return 0;
}