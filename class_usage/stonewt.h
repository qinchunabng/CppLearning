//
// Created by 37341 on 2024/12/2.
//

#ifndef STONEWT_H
#define STONEWT_H

class Stonewt {
private:
    enum{Lbs_per_stn = 14};     // pounds per stone
    int stone;                  // whole stones
    double pds_left;            // fractional pounds
    double pounds;              // entire weight in pounds
    public:
    Stonewt(double lbs);        // constructor for double pounds
    Stonewt(int lbs, double ubs);// constructor fot stone, lbs
    Stonewt();
    ~Stonewt();
    void show_lbs() const;      // show weight in pounds format
    void show_stn() const;      // show weight in stone format

};

#endif //STONEWT_H
