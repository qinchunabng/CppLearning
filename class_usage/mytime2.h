//
// Created by 37341 on 2024/12/1.
//

#ifndef MYTIME2_H
#define MYTIME2_H

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
    Time operator*(double n) const;
    void Show() const;
};

#endif //MYTIME2_H
