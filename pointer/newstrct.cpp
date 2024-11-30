//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable *ps = new inflatable;    // allocate space for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20).get();              //method 1 for member access
    cout << "Enter volume of cubic feet: ";
    cin >> (*ps).volume;                //method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << ps->name << endl;   //method 2
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;      //free memory used by ps
    return 0;
}