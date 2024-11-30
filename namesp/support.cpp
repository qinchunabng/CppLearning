//
// Created by 37341 on 2024/11/27.
//
#include <iostream>
extern double warming;  //use warming from another file

//function prototypes
void update(double dt);
void local();

using std::cout;

//modifies global variable
void update(double dt) {
    extern double warming;  //optional redeclaration
    warming += dt;          //change global variable
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local() {              // use local variable
    double warming = 0.8;   //new variable hides external one
    cout << "Local warming = " << warming << " degrees.\n";
    //Access global variable with scope resolution operator
    cout << "But global warming = " << ::warming << " degrees.\n";
}