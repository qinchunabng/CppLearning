//
// Created by 37341 on 2024/11/15.
//
#include <iostream>
using namespace std;

/*
 * 编写一个程序，要求用户以整数方式输入秒数（使用 long或 long long变量存储），
 * 然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、
 * 每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
 */
int main() {
    const int SECONDS_PER_MINUTE = 60;
    const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * 60;
    const int SECONDS_PER_DAY = SECONDS_PER_HOUR * 24;
    int seconds;
    cout <<"Enter the number of seconds:";
    cin >> seconds;
    int days = seconds / SECONDS_PER_DAY;
    int hours = seconds % SECONDS_PER_DAY / SECONDS_PER_HOUR;
    int minutes = seconds % SECONDS_PER_DAY % SECONDS_PER_HOUR / SECONDS_PER_MINUTE;
    int left_seconds = seconds % SECONDS_PER_DAY % SECONDS_PER_HOUR % SECONDS_PER_MINUTE;
    cout << seconds << "seconds = " << days << "days," << hours << "hours," << minutes << "minutes," << left_seconds << "seconds" << endl;
    return 0;
}