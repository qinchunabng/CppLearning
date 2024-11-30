//
// Created by 37341 on 2024/11/27.
//
#include <iostream>
using namespace std;

//external variable
double warming = 0.3;
//function prototypes
void update(double dt);
void local();

int main() {
    cout << "Global warming is " << warming << "degrees." << endl;
    update(0.1);
    cout << "Global warming is " << warming << "degrees." << endl;
    local();
    cout << "Global warming is " << warming << "degrees." << endl;
    return 0;
}