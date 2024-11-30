//
// Created by 37341 on 2024/11/15.
//
#include <iostream>
using namespace std;

/*
 * 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
 * 将这些信息存储在 long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。
 * 该程序的输出应与下面类似：
 */

int main() {
    long long world_population, us_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    double percentage = us_population / double(world_population) * 100;
    cout << "The population of the US is " << percentage << "% of the world population." << endl;
    return 0;
}