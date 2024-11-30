//
// Created by 37341 on 2024/11/16.
//
#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout << "I have some dessert: " << dessert;
    cout << "for you, " << name << ".\n";
    return 0;
}