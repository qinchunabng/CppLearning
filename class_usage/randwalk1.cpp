//
// Created by 37341 on 2024/12/2.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(NULL));  // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;
    fout.open("randwalk.txt");

    fout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        fout << "Enter step length: ";
        if(!(cin >> dstep)) {
            break;
        }
        fout << steps << ": " << result << endl;
        while(result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            fout << steps << ": " << result << endl;
        }
        fout << "After " << steps << " steps, the subjects has the following location:\n"
             << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        fout << "Enter target distance (q to quit): ";
    }
    fout << "Bye!" << endl;
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}