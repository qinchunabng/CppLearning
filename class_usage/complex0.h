//
// Created by 37341 on 2024/12/3.
//

#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <ostream>

class complex {
private:
    double real;
    double imaginary;
    public:
    complex(double r=0,double i=0);
    complex operator+(const complex& z) const;
    complex operator-(const complex& z) const;
    complex operator*(const complex& z) const;
    complex operator~() const;
    friend complex operator*(const double& s, const complex& z);
    friend std::ostream& operator<<(std::ostream& os, const complex& z);
    friend std::istream& operator>>(std::istream& is, complex& z);
};

#endif //COMPLEX0_H
