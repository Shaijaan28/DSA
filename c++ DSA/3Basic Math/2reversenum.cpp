#include<iostream>
using namespace std;
int main (){
    int n ;
    cout << "Enter Number : ";
    cin >> n;
    int revNum =0;
    while(n>0){
        int lastdigit = n%10;
        revNum=(revNum*10)+lastdigit;
        n=n/10;
       
    }
     cout<< revNum;
    return 0;
}