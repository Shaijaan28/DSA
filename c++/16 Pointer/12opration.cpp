#include<iostream>
using namespace std;
int main (){
    // int*ptr2;
    // int*ptr1 = ptr2 + 2;

    // cout <<ptr1-ptr2<< endl;

    int* ptr1;
    int* ptr2=ptr1;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout <<(ptr1 = ptr2) << endl;
    return 0;
}