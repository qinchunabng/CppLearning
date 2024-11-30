//
// Created by 37341 on 2024/11/17.
//
#include <array>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //C, original C++
    double a1[4] = {1.0, 2.0, 3.0, 4.0};
    //C++98 STL
    vector<double> a2(4);   // create vector of 4 elements
    //no simple way to initialize in C98
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    //C++11 create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.41, 1.62};
    array<double, 4> a4;
    a4=a3;  //valid for array objects of the same size

    //use array notation
    cout << "a1[2]=" << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]=" << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]=" << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]=" << a4[2] << " at " << &a4[2] << endl;

    //misdeed
    a1[-2]= 20.2;   //same as *(a1-2)=20.2,moved backward 2 elements
    cout << "a1[-2]=" << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]=" << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]=" << a4[2] << " at " << &a4[2] << endl;
    return 0;
}