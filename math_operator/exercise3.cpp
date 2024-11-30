//
// Created by 37341 on 2024/11/15.
//
#include <iostream>
using namespace std;


//3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1 度为
//60 分，1 分等于 60 秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
//下面是该程序运行时的情况：

int main() {
    const double DEGREE = 60.0f;
    int degrees,minutes,seconds;
    double latitude;
    cout <<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout <<"First, enter the degree:";
    cin>>degrees;
    cout << "Next, enter the minutes of arc:";
    cin>>minutes;
    cout <<"Second enter the degree:";
    cin>>seconds;
    latitude = degrees + minutes / DEGREE + seconds / DEGREE / DEGREE;
    cout <<degrees<<"degree,"<<minutes<<"minutes,"<<seconds<<"seconds = "<< latitude << endl;
    return 0;
}