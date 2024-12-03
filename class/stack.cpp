//
// Created by 37341 on 2024/11/30.
//
#include "stack.h"

st::Stack::Stack() {
    top = 0;
}

bool st::Stack::isEmpty() const{
    return top == 0;
}

bool st::Stack::isFull() const {
    return top == MAX;
}

bool st::Stack::push(const Item item) {
    if(isFull()) {
        return false;
    }
    items[top++] = item;
    return true;
}

bool st::Stack::pop(Item item) {
    if(isEmpty()) {
        return false;
    }
    item = items[--top];
    return true;
}




