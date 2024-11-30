//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC; //convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() < start + delay)        //wait until time elapses
        ;                                   // note the semicolon

    cout << "finished\a\n";
    return 0;
}