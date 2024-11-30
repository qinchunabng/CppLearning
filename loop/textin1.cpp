//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n ";
    cin >> ch;  // get a character
    while (ch != '#') { // test the character
        cout << ch;  // echo the character
        ++count;    // count the character
        cin >> ch;  // get the next character
    }
    cout << endl << count << " characters read\n";
    return 0;
}