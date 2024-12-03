//
// Created by 37341 on 2024/12/3.
//
#include <iostream>
#include "complex0.h"

complex::complex(double r, double i) {
    real = r;
    imaginary = i;
}

complex complex::operator-(const complex &z) const {
    return complex(real - z.real, imaginary - z.imaginary);
}

complex complex::operator+(const complex &z) const {
    return complex(real + z.real, imaginary + z.imaginary);
}

complex complex::operator*(const complex &z) const {
    return complex(real * z.real - imaginary * z.imaginary, real * z.imaginary + imaginary * z.real);
}

complex operator*(const double &s, const complex &z){
    return complex(s * z.real, s * z.imaginary);
}

std::ostream &operator<<(std::ostream &os, const complex &z) {
    os << "(" << z.real << ", " << z.imaginary << "i)";
    return os;
}

std::istream &operator>>(std::istream &is, complex &z) {
    is >> z.real >> z.imaginary;
    return is;
}

complex complex::operator~() const {
    return complex(real, -imaginary);
}
