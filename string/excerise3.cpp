//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[20], lastName[20];
    cout << "Enter your first name: ";
    cin.getline(firstName, 20);
    cout << "Enter your last name: ";
    cin.getline(lastName, 20);

    char *fullName = new char[strlen(firstName) + strlen(lastName) + 3];
    strcpy(fullName, firstName);
    strcat(fullName, ", ");
    strcat(fullName, lastName);
    cout << "Your full name: " << fullName << endl;
    return 0;
}