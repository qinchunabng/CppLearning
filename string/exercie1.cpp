//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

int main() {
    char firstName[20];
    char lastName[20];
    char grade;
    int age;
    cout << "What is your first name?";
    cin.getline(firstName, 20);
    cout << "What is your last name?";
    cin.getline(lastName, 20);
    cout << "What letter grade do you deserve?";
    cin.get(grade);
    grade = grade + 1;
    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << firstName << "," << lastName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}