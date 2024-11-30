//
// Created by 37341 on 2024/11/25.
//
#include <iostream>

template <typename T>
T max5(T ar[]);

int main() {
    using namespace std;
    int ar1[] = {1, 2, 3, 4, 5};
    cout << "Max of ar1: " << max5(ar1) << endl;
    double ar2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Max of ar2: " << max5(ar2) << endl;
    return 0;
}

template <typename T>
T max5(T ar[]) {
    T max = ar[0];
    for (int i = 1; i < 5; i++) {
        if (ar[i] > max)
            max = ar[i];
    }
    return max;
}