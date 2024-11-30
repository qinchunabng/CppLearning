//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

struct Car {
    string producer;
    int year;
};

int main() {
    Car *cars;
    int size;
    cout << "How many cars do you want to catalog?";
    cin >> size;
    cin.get();
    cars = new Car[size];
    for (int i = 0; i < size; i++) {
        cout << "Car #" << (i+1) << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].producer);
        cout << "Please enter the year: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < size; i++) {
        cout << cars[i].year << "\t" << cars[i].producer << endl;
    }
    delete[] cars;
    return 0;
}