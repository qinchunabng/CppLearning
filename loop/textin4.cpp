//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

int main() {
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        cout.put(ch);
        ++count;
    }

    cout << endl << count << " characters read\n";
    return 0;
}