//
// Created by 37341 on 2024/11/27.
//
#include <iostream>

extern int tom;
static int dick = 10;

int harry = 200;

void remote_access() {
    using namespace std;
    cout << "remote_access() reports the following address:" << endl;
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}