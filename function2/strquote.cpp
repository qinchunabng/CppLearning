//
// Created by 37341 on 2024/11/24.
//
#include <iostream>
using namespace std;

string version1(const string &s1, const string &s2);
const string &version2(string &s1, const string &s2); // has side effect
const string &version3(string &s1, const string &s2); // bad design

int main() {
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << "\n";
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << "\n";
    cout << "Your original string: " << input << "\n";

    result = version2(input, "###");
    cout << "Your string enhanced: " << result << "\n";
    cout << "Your original string: " << input << "\n";

    cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "Your string enhanced: " << result << "\n";
    cout << "Your original string: " << input << "\n";
    return 0;
}

string version1(const string &s1, const string &s2) {
    string tmp;
    tmp = s1 + s2;
    return tmp;
}

const string &version2(string &s1, const string &s2) {
    s1 = s2 + s1 + s2;
    //safe to return reference passed to function
    return s1;
}

const string &version3(string &s1, const string &s2) {
    string tmp = s2 + s1 + s2;
    //unsafe to return reference to local vairable
    return tmp;
}