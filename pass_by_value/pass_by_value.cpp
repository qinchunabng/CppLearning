#include <iostream>
using namespace std;

void swap(int n1,int n2);

int main(){
    int n1 = 10;
    int n2 = 20;

    swap(n1, n2);

    cout << "n1 = " << n1 << ", n2 = "<< n2 <<endl;

    exit(0);
}

void swap(int n1,int n2){
    cout << "交换前:" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    int temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "交换后:" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
}