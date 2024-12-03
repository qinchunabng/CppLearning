//
// Created by 37341 on 2024/12/3.
//

#ifndef STRINGBAD_H
#define STRINGBAD_H

#include <iostream>
class StringBad {
private:
    char *str;          // pointer to string
    int len;            // length of string
    static int num_strings; // number of objects
    public:
    StringBad(const char *s); // constructor
    StringBad();              // default constructor
    ~StringBad();               // destructor
    // friend function
    friend std::ostream &operator<<(std::ostream &os, const StringBad &s);
};

#endif //STRINGBAD_H
