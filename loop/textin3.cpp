//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;

    cin.get(ch);
    while(!cin.fail()) {    //test for EOF
        cout << ch;         //echo
        ++count;
        cin.get(ch);        //attempt to read another char
    }
    cout << endl << count << " characters read\n";
    return 0;
}