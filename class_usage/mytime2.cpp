//
// Created by 37341 on 2024/12/1.
//
#include <iostream>
#include "mytime2.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHour(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const {
    Time sub;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    sub.minutes = (tot2 - tot1) % 60;
    sub.hours = (tot2 - tot1) / 60;
    return sub;
}

Time Time::operator*(const double n) const {
    Time result;
    long totalminutes = minutes * n + hours * n * 60;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    return result;
}

void Time::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes" << std::endl;
}
