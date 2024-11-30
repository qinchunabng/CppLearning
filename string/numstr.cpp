//
// Created by 37341 on 2024/11/15.
//
#include <iostream>
using namespace std;

int main() {
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char street[80];
    cin.getline(street, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << street << endl;
    cout << "Done!" << endl;
    return 0;
}