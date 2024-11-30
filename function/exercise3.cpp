//
// Created by 37341 on 2024/11/24.
//
#include <iostream>

struct box {
    char marker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box box);
void set_volume(box *pb);

int main() {
    box box = {"box1", 1.0, 2.0, 3.0, 6.0};
    display(box);
    set_volume(&box);
    display(box);
    return 0;
}

void display(box box) {
    std::cout << "marker: " << box.marker << std::endl;
    std::cout << "height: " << box.height << std::endl;
    std::cout << "width: " << box.width << std::endl;
    std::cout << "length: " << box.length << std::endl;
    std::cout << "volume: " << box.volume << std::endl;
}

void set_volume(box *pb) {
    pb->volume = pb->height * pb->width * pb->length;
}