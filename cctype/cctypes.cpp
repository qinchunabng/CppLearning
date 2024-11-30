//
// Created by 37341 on 2024/11/19.
//
#include <iostream>
using namespace std;

int main() {
    cout << "Enter text for analysis, and type @ to determine input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while(ch != '@') {
        if(isalpha(ch))
            chars++;
        else if(isspace(ch))
            whitespace++;
        else if(isdigit(ch))
            digits++;
        else if(ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
         << whitespace << " spaces, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}