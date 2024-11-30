//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

int main() {
    string firstName,lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    string fullName = firstName + ", " + lastName;
    cout << "Your full name: " << fullName << endl;
    return 0;
}