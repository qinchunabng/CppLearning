//
// Created by 37341 on 2024/11/18.
//
#include <iostream>
using namespace std;

int main() {
    double daphne_balance = 100.0;
    double cleo_balance = 100.0;
    double rate1 = 0.1;
    double rate2 = 0.05;
    int years = 1;

    double sum1 = daphne_balance + daphne_balance * rate1;
    double sum2 = cleo_balance * (1 + rate2);
    while(sum1 >= sum2) {
        sum1 += daphne_balance * rate1;
        sum2 = sum2 * (1 + rate2);
        years++;
    }
    cout << years << " years later, Cleo's balance will exceed Daphne's."<<endl;
    cout << "Daphne's balance is "<< sum1 << endl;
    cout << "Cleo's balance is "<< sum2 << endl;
    return 0;
}