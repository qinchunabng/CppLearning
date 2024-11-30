//
// Created by 37341 on 2024/11/25.
//
#include <iostream>

const int ArSize = 80;
char * left(const char * str, int n = 1);

int main() {
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string: \n";
    cin.getline(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample, 8);
    cout << ps << endl;
    delete [] ps;
    return 0;
}

// This function returns a pointer to a new string
// consisting of the first n characters of the string str.
char * left(const char * str, int n) {
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while(i <= n)
        p[i++] = '\0';
    return p;
}