//
// Created by 37341 on 2024/12/2.
//
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;       // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {                    // default constructor, wt = 0
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {

}

void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds.\n";
}

void Stonewt::show_lbs() const {
    cout << pounds << " pounds.\n";
}