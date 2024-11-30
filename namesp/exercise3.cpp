//
// Created by 37341 on 2024/11/28.
//
#include <iostream>
#include <string.h>

struct chaff {
    char dross[20];
    int slag;
};

void show(const chaff & cp);

int main() {
    using namespace std;
    char buff[100];
    chaff *p1;
    p1 = new chaff;
    strcpy(p1->dross, "chaff1");
    p1->slag = 1;
    cout << p1 << " = p1" << std::endl;
    show(*p1);
    delete p1;

    chaff *p2;
    p2 = new(buff) chaff;
    strcpy(p2->dross, "chaff2");
    p2->slag = 2;
    cout << p2 << " = p2" << std::endl;
    show(*p2);

    chaff *p3;
    p3 = new(buff + sizeof(chaff)) chaff;
    strcpy(p3->dross, "chaff3");
    p3->slag = 3;
    cout << p3 << " = p3" << std::endl;
    show(*p3);
    return 0;
}

void show(const chaff & cp) {
    std::cout << "dros = " << cp.dross << ", ";
    std::cout << "slag = " << cp.slag << std::endl;
}
