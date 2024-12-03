//
// Created by 37341 on 2024/12/1.
//

#ifndef LIST_H
#define LIST_H

typedef int Item;

class List {
    struct Node {
        Item item;
        Node* next;
    } *head;
    int size;
    int capacity;
public:
    List(int capacity = 50);
    ~List();
    bool isEmpty();
    bool isFull();
    void insert(Item item);
    void visit(void (*pf)(Item &item));
};

#endif //LIST_H
