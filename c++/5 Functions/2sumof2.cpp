#include <iostream>
using namespace std;
//sum of 2
int sum(int a, int b){
    int s = a+b;
    return s;
}

//min of 2
int minOfTwo(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<< sum(10,5)<< endl;
    cout<<minOfTwo(24,90)<< endl;
    return 0;
}