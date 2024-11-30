//
// Created by 37341 on 2024/11/17.
//
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char animal[20] = "bear";   //animal holds bear
    const char * bird = "wren"; //bird holds address of string
    char * ps;

    cout << animal << " and ";  //display bear
    cout << bird << endl;       //display wren

    // cout << ps << endl;         //may display garbage or crash

    cout << "Enter a kind of animal: ";
    cin >> animal;              //of if input < 20 chars
    // cin >> ps;   //Too horrible a blunder to try; ps doesn't point to a allocated space

    ps = animal;                //set ps to point to string
    cout << ps << "!\n";        //ok, same as using animal

    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;

    ps =new char[strlen(animal) + 1]; //get new storage
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
    return 0;
}