//
// Created by 37341 on 2024/11/20.
//
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outfile;             // create object for output
    outfile.open("carinfo.txt");    // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //display information on screen with cout
    cout << fixed << setprecision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make the model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was Asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    //now do exact same things using outfile instead of cout
    outfile << fixed << setprecision(2);
    outfile.setf(ios_base::showpoint);
    outfile << "Make the model: " << automobile << endl;
    outfile << "Year: " << year << endl;
    outfile << "Was Asking $" << a_price << endl;
    outfile << "Now asking $" << d_price << endl;
    outfile.close();      // finished with the file
    return 0;
}