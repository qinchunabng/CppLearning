//
// Created by 37341 on 2024/11/20.
//
#include <iostream>
#include <fstream>      //file I/O support
#include <cstdlib>      //support for the exit function
using namespace std;

const int SIZE = 60;

int main() {
    char filename[SIZE];
    ifstream infile;        //object for handling file input
    cout << "Enter the name of the file: ";
    cin.getline(filename, SIZE);
    infile.open(filename);
    if (!infile.is_open()) {
        cout << "Cloud not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0;
    int counter = 0;        //number of items read
    infile >> value;        //get first value
    while(infile.good()) {
        ++counter;          //increment counter
        sum += value;       //calculate running total
        infile >> value;    //get next value
    }
    if(infile.eof()) {
        cout << "End of file reached.\n";
    }else if(infile.fail()) {
        cout << "Input terminated by data mismatch.\n";
    }else {
        cout << "Input terminated for unknown reason.\n";
    }
    if(counter == 0) {
        cout << "No data processed.\n";
    }else {
        cout << "Items read: " << counter << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / counter << endl;
    }

    infile.close();     //finished with the file
    return 0;
}