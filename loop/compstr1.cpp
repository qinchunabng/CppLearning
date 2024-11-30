//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char word[5] = "?ate";
    for (char ch='a'; strcmp(word,"mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After changing, the word is: " << word << endl;
    return 0;
}