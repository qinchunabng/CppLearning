//
// Created by 37341 on 2024/11/16.
//
#include <iostream>
using namespace std;

int main() {
    int update = 6;     //declare a variable
    int * p_update;     //declare pointer to an int
    p_update = &update; //assign address of int to pointer

    //express value two ways
    cout << "Value of update is: " << update << endl;
    cout << "Value of update is: " << *p_update << endl;

    //express address two ways
    cout << "Address: &update = " << &update << endl;
    cout << "Address: p_update = " << p_update << endl;

    //use pointer to change value
    *p_update = *p_update + 1;
    cout << "Now update = "<<update << endl;

    return 0;
}