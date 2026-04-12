#include<bits/stdc++.h> // 2nd method <dont use +>
using namespace std;
void f(int i,int n){
    if(i<1) return ;
    f(i-1,n);
    cout << i << endl;
} 
int main (){
    int n;
    cout << "Enter n: ";
    cin >> n;
    f(n,n);
    return 0;
}