//
// Created by 37341 on 2024/12/1.
//
#include "mytime3.h"

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
    int tot1 = minutes + 60 * hours;
    int tot2 = t.minutes + 60 * t.hours;
    sub.minutes = (tot1 - tot2) % 60;
    sub.hours = (tot1 - tot2) / 60;
    return sub;
}

Time Time::operator*(double mult) const {
    Time result;
    result.minutes = minutes * mult + hours * mult * 60;
    result.hours = result.minutes / 60;
    result.minutes %= 60;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Time &t) {
    os << t.hours << ":" << t.minutes;
    return os;
}
