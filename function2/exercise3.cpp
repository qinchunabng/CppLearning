//
// Created by 37341 on 2024/11/25.
//
#include <iostream>

void upper_str(std::string &str);

int main() {
    using namespace std;
    string str;
    cout << "Enter a string: ";
    while (getline(cin, str) && str != "q") {
        upper_str(str);
        cout << str << endl;
        cout << "Enter a string: ";
    }
    return 0;
}

void upper_str(std::string &str) {
    using namespace std;
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}