//
// Created by 37341 on 2024/11/25.
//
#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
    char *str;  // points to a string
    int ct; // length of string (not counting '\0')
};

void set(stringy &str, const char s[]);
void show(const stringy &str = {}, const int n = 1);
void show(const string &str = "", const int n = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy &str, const char s[]) {
    int len = strlen(s);
    str.str = new char[len + 1];
    strcpy(str.str, s);
    str.ct = len;
}

void show(const stringy &str, const int n) {
    for (int i = 0; i < n; i++)
        cout << str.str << endl;
}

void show(const string &str, const int n) {
    for (int i = 0; i < n; i++)
        cout << str << endl;
}