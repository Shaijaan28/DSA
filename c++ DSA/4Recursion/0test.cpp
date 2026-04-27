#include<iostream>
using namespace std;
int f(int a, int n ){
     if(n==0) return 1;
     return   a*f(a,n-1);

    }
     
int main (){
    int n;
    cout <<"Enter Number : ";
    cin >>n;
    int a;
    cout <<"Enter Number : ";
    cin >>a;
    cout << f(n,a);
    return 0;
}