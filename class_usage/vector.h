//
// Created by 37341 on 2024/12/2.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
namespace VECTOR {

    class Vector {
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode mode = RECT);
        void reset(double n1, double n2, Mode mode = RECT);
        ~Vector();
        double xval() const {
            return x;
        };
        double yval() const {
            return y;
        }
        double magval() const {
            return mag;
        }
        double angval() const {
            return ang;
        }
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector &v) const;
        Vector operator-(const Vector &v) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector &v);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}

#endif //VECTOR_H
