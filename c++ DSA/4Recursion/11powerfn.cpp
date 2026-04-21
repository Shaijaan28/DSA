#include<bits/stdc++.h>
using namespace std;
int pow(int a , int n){
    if(n==0) return 1;
    return a*pow(a, n-1);

}
int main (){
    int a;
    cout << "Enter base : ";
    cin >> a;
    int n;
    cout << "Enter power : ";
    cin >> n; 
    return 0;
}