//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

int main() {
    int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num != 0) {
        sum+=num;
        cout << "Enter a number: ";
        cin>>num;
    }
    cout<<"Sum is: "<<sum << endl;
    return 0;
}