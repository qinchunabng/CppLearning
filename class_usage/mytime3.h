//
// Created by 37341 on 2024/12/1.
//

#ifndef MYTIME3_H
#define MYTIME3_H
#include <iostream>

class Time {
private:
    int hours;
    int minutes;

    public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHour(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double d) const;
    friend Time operator*(double d, const Time &t) {
        return t * d;
    }
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif //MYTIME3_H
