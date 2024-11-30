//
// Created by 37341 on 2024/11/26.
//
#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos) {
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar p) {
    using namespace std;
    const double Rad_to_deg = 57.29578;

    cout << "distance: " << p.distance
         << " angle: " << p.angle * Rad_to_deg
         << "degree" << endl;
}