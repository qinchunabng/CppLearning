//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
using namespace std;

//reversing an array
int main() {
    cout << "Enter a word: ";
    string word;
    cin >> word;

    //physically modify string object
    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j < i; j++, i--) {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}