#include<bits/stdc++.h>
using namespace std; // print name n times

void printName(int i,int n){
    if(i>n) return ;
    cout<<"Shaijaan "<< endl;
   
    printName(i+1,n);
    
}
int main(){
    int n;
    cout <<"Enter no of times : ";
    cin>>n;
    printName(0,n);
    return 0;
}