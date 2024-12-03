//
// Created by 37341 on 2024/12/1.
//
#include <iostream>
#include "list.h"

List::List(int capacity) {
    size = 0;
    this->capacity = capacity;
    head = new Node;
    head->next = NULL;
}

List::~List() {
    Node *p = head;
    while (p!= NULL) {
        Node *q = p->next;
        delete p;
        p = q;
    }
}

bool List::isEmpty() {
    return head->next == NULL;
}

bool List::isFull() {
    return size >= this->capacity;
}

void List::insert(Item value) {
    if(isFull()) {
        std::cout << "List is full" << std::endl;
        return;
    }else {
        Node *newNode = new Node;
        newNode->item = value;
        newNode->next = head->next;
        head->next = newNode;
        size++;
    }
}

void List::visit(void (*pf)(Item &item)) {
    Node *p = head->next;
    while (p!= NULL) {
        (*pf)(p->item);
        p = p->next;
    }
}