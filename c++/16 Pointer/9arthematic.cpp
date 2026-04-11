#include<iostream>
using namespace std;
int main (){
    int a =10;
    int *ptr =&a;
    cout<<ptr<<endl;
    //ptr++;
    ptr--;
    cout << ptr << endl; //+4bits
    return 0;
}