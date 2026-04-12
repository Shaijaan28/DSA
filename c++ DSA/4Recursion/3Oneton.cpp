#include<bits/stdc++.h>
using namespace std;
void printnum(int i, int n){
    if(i>n) return ;
    cout <<i<< endl;
    printnum(i+1,n);
}

int main (){
    int n ;
    cout <<"Enter n : ";
    cin >>n;
    printnum(1,n);
    
    return 0;
}