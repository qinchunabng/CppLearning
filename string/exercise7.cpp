//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

struct Pizza {
    string company;
    int diameter;
    float weight;
};

int main() {
    Pizza * ptr = new Pizza;
    cout << "Enter the company: ";
    cin >> ptr->company;
    cout << "Enter the diameter: ";
    cin >> ptr->diameter;
    cout << "Enter the weight: ";
    cin >> ptr->weight;

    cout << "Information of the pizza: " << endl;
    cout << "company: " << ptr->company << endl;
    cout << "diameter: " << ptr->diameter << endl;
    cout << "weight: " << ptr->weight << endl;
    return 0;
}