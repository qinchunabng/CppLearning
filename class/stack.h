//
// Created by 37341 on 2024/11/30.
//

#ifndef STACK_H
#define STACK_H

namespace st {
    typedef void* Item;

    class Stack {
    private:
        enum {MAX = 10};    // constant specific to class
        Item items[MAX];    // holds stack items
        int top;            // index for top stack item
    public:
        Stack();
        bool isEmpty() const;
        bool isFull() const;
        //push() returns false if stack already is full, true otherwise
        bool push(const Item item);    // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item item);           // pop top into item
    };
}
#endif //STACK_H
