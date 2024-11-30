//
// Created by 37341 on 2024/11/23.
//
#include <cmath>
#include <iostream>
using namespace std;

// structure templates
struct polar {
    double distance; // distance from origin
    double angle; // direction from origin
};

struct rect {
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};

//prototypes
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main() {
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numers (q to quit): ";
    }
    cout << "Done." << endl;
    return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar(const polar *pda) {
    const double Rad_to_deg = 57.29578;

    cout << "distance: " << pda->distance;
    cout << ",angle: " << pda->angle * Rad_to_deg;
    cout << "degrees" << endl;
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect *pxy, polar *pda) {
    pda->distance =
            sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}