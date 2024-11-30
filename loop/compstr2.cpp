//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

int main() {
    string word = "?ate";
    for(char c = 'a'; word != "mate"; c++) {
        cout << word << endl;
        word[0] = c;
    }
    cout << "After changing, the word is: " << word << endl;
    return 0;
}