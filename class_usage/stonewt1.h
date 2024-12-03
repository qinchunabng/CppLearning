//
// Created by 37341 on 2024/12/3.
//

#ifndef STONEWT1_H
#define STONEWT1_H

class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

    public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double() const;
};

#endif //STONEWT1_H
