//
// Created by 37341 on 2024/11/30.
//
#include <iostream>
#include "stack.h"
#include "customer.h"

double total = 0;

void add(st::Stack &st, const cs::Customer *c);
void remove(st::Stack &st, cs::Customer *c);

int main() {
    using namespace std;
    st::Stack st;
    cs::Customer c1 = {"John", 20};
    add(st, &c1);
    cs::Customer c2 = {"Jane", 30};
    add(st, &c2);
    cout << "Total: " << total << endl;
    cs::Customer c3 = {"Mary", 40};
    add(st, &c3);
    cout << "Total: " << total << endl;

    cs::Customer *c4 = &c1;
    remove(st, c4);
    cs::show(c1);
    cout << "Total: " << total << endl;
}

void add(st::Stack &st, const cs::Customer *c) {
    if(st.push((st::Item)c)) {
        total+=c->payment;
    }else {
        std::cout << "Stack is full!\n";
    }
}

void remove(st::Stack &st, cs::Customer *c) {
    if(st.pop(c)) {
        total-=c->payment;
    }else {
        std::cout << "Stack is empty!\n";
    }
}