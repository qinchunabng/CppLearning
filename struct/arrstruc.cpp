//
// Created by 37341 on 2024/11/16.
//
#include <iostream>
using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};
int main() {
    inflatable guests[2]={ //initializing an array of structs
            {"Bambi", 0.5, 21.99}, //first structure in array
            {"Godzilla", 2000, 565.99} //second structure in array
    };
    cout << "The guests "<< guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}