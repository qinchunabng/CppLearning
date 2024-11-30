//
// Created by 37341 on 2024/11/25.
//
#include <iostream>
#include <string.h>

template <typename T>
T maxn(T arr[], int n);

template <> char* maxn(char *arr[], int n);

int main() {
    using namespace std;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Max of arr: " << maxn(arr, sizeof(arr)/sizeof(int)) << endl;
    double arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout << "Max of arr1: " << maxn(arr1, sizeof(arr1)/sizeof(double)) << endl;

    char *arr2[] = {"Hello", "World","A", "AB","ABC"};
    cout << "Max of arr2: " << maxn(arr2, 5) << endl;
    return 0;
}

template <typename T>
T maxn(T arr[],const int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <> char *maxn(char *arr[], const int n) {
    char *max = arr[0];
    for (int i = 1; i < n; i++) {
        if(strlen(arr[i]) > strlen(max)) {
            max = arr[i];
        }
    }
    return max;
}