//
// Created by 37341 on 2024/11/24.
//
#include <array>
#include <iostream>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

//function to modify array object
void fill(std::array<int, Seasons> *pa);
//function that uses array object without modifying it
void show(std::array<int, Seasons> da);

int main() {
    std::array<int, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<int, Seasons> *pa) {
    using namespace std;
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<int, Seasons> da) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}