//
// Created by 37341 on 2024/11/25.
//
#include <iostream>

struct CandyBar {
    std::string brand;
    double weight;
    int calorie;
};

void setCandyBar(CandyBar &candy_bar,
    const std::string &brand = "Millennium Munch",
    const double weight=2.85, const int calorie=25);
void showCandyBar(const CandyBar &candy_bar);

int main() {
    CandyBar candy_bar;
    setCandyBar(candy_bar);
    showCandyBar(candy_bar);
    return 0;
}


void setCandyBar(CandyBar &candy_bar,
    const std::string &brand,
    const double weight, const int calorie) {
    candy_bar.brand = brand;
    candy_bar.weight = weight;
    candy_bar.calorie = calorie;
}

void showCandyBar(const CandyBar &candy_bar) {
    std::cout << "Brand: " << candy_bar.brand << std::endl;
    std::cout << "Weight: " << candy_bar.weight << std::endl;
    std::cout << "Calorie: " << candy_bar.calorie << std::endl;
}