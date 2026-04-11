#include<iostream>
#include<vector>
using namespace std;
int main (){
    // int a=10;
    // int *ptr=&a;

    float price = 100.25f;
    float*ptr = &price;
    cout<< ptr << endl;
     //cout<< &a << endl;
     cout<< &ptr << endl;
    return 0;
}
