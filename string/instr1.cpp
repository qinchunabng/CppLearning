//
// Created by 37341 on 2024/11/15.
//
#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    // cin>>name;
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert: \n";
    // cin >> dessert;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious "<<dessert<<" for you, "<<name<<".\n";
    return 0;
}