//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;

    cout << "Enter a character; enter # to quit:\n ";
    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}