//
// Created by 37341 on 2024/11/21.
//
#include <iostream>
#include <cctype>
using namespace std;

/**
 * 编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），同时将大写字符
 * 转换为小写，将小写字符转换为大写（别忘了 cctype 函数系列）
 */
int main() {
    char ch;
    cout << "Enter a character: ";
    cin.get(ch);
    while(ch != '@') {
        if(isdigit(ch)) {
        }else if(isalpha(ch)) {
            if(isupper(ch)) {
                ch = tolower(ch);
            }else {
                ch = toupper(ch);
            }
            cout << ch;
        }else {
            cout << ch;
        }
        cin.get(ch);
    }
}