//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

struct CandyBar {
    char brand[20];
    float weight;
    int calories;
};

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calories: " << snack.calories << endl;
    return 0;
}