//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char word[20];
    int count = 0;
    cout << "Enter a word: ";
    cin >> word;
    while(strcmp(word, "done") != 0) {
        count++;
        cin >> word;
    }
    cout << "You entered a total of " << count << "words." << endl;
    return 0;
}