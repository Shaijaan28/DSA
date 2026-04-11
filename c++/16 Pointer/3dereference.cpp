#include<iostream>
using namespace std;
int main (){
    int a=10;
    int* ptr =&a;

    int** parPtr =&ptr;

    cout << **(parPtr) << endl;
    cout << (ptr) << endl;
    return 0;
}