//
// Created by 37341 on 2024/11/28.
//
#include <iostream>
#include "golf.h"
#include <cstring>

const int MAX = 5;

int isblank(char str[]);

int main() {
    golf arr[MAX];
    int count = 0;
    for (int i = 0; i < MAX; i++) {
        if(setgolf(arr[i])) {
            count++;
        }else {
            break;
        }
    }

    if(count > 0) {
        std::cout << "Show the results: \n";
        for (int i = 0; i < count; i++) {
            showgolf(arr[i]);
        }
    }else {
        std::cout << "No result to show!\n";
    }

    return 0;
}

void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname , name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    std::cout << "Please enter the name of the golf player: ";
    std::cin.getline(g.fullname, len);
    // std::cin.get();
    if(isblank(g.fullname))
        return 0;
    std::cout << "Please enter the handicap of the golf player: ";
    std::cin >> g.handicap;
    std::cin.get();
    return 1;
}

//determines if str is blank
int isblank(char str[]) {
    if(str == NULL || strlen(str) == 0)
        return 1;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != ' ')
            return 0;
    }
    return 1;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    std::cout << "fullname: " << g.fullname  << ", "
              << "handicap: " << g.handicap << std::endl;
}