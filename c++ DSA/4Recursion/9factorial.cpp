#include<bits/stdc++.h>
using namespace std; //factorial
int fact(int n){
    if(n<2) return 1;
    int ans = fact(n-1)*n;
    return ans;
}
int main (){
    int n ;
    cout << "Enter number : " ;
    cin >> n;
    cout << fact(n);
    return 0;
}