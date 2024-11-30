//
// Created by 37341 on 2024/11/27.
//
#include <iostream>

int tom = 3;        //external variable definition
int dick = 30;      //external variable definition
static int harry = 300; //static, internal linkage

//function prototype
void remote_access();

int main() {
    using namespace std;
    cout << "main() reports the following addresses:" << endl;
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}