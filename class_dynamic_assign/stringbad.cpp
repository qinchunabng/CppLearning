//
// Created by 37341 on 2024/12/3.
//
#include <iostream>
#include <cstring>
#include "stringbad.h"
using std::cout;

//initializing static class member
int StringBad::num_strings = 0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char * s) {
    len = std::strlen(s);           // set size
    str = new char[len + 1];        // allot storage
    std::strcpy(str, s);            // initialize pointer
    num_strings++;                  // set object count
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad() {
    len = 3;
    str = new char[len + 1];
    std::strcpy(str, "C++");    // default string
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::~StringBad() {
    cout << "\"" << str << "\" object deleted,\n";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& s) {
    os << s.str;
    return os;
}
