//
// Created by 37341 on 2024/11/14.
//
#include <iostream>
using namespace std;
#include <string>

//类做友元
class Building;
class GoodGay {
public:
    GoodGay();
    void visit();
    void visit2();

    Building *building;
};

class Building {
    //定义友元类
    // friend class GoodGay;
    //定义全局友元函数
    // friend void GoodGay(Building *building);
    //定义类的成员函数为友元函数
    friend void GoodGay::visit();
public:
    string m_SittingRoom;
    Building();
    // Building() {
    //     m_SittingRoom="客厅";
    //     m_BedRoom="卧室";
    // }
private:
    string m_BedRoom;
};

//类外写成员函数
Building::Building() {
    m_SittingRoom="客厅";
    m_BedRoom="卧室";
}

GoodGay::GoodGay() {
    building = new Building;
}

void GoodGay::visit() {
    cout <<"好基友正在访问"<<building->m_SittingRoom<<endl;
    cout <<"好基友正在访问"<<building->m_BedRoom<<endl;
}

void GoodGay::visit2() {
    cout <<"好基友正在访问"<<building->m_SittingRoom<<endl;
}


// void GoodGay(Building *building) {
//     cout<<"好基友的全局函数正在访问："<<building->m_SittingRoom<<endl;
//     cout<<"好基友的全局函数正在访问："<<building->m_BedRoom<<endl;
// }

int main() {
    // Building building;
    // GoodGay(&building);

    GoodGay gg;
    gg.visit();
    return 0;
}