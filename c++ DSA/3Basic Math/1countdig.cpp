#include<iostream>
using namespace std;
int main (){
    int n ;
    cout << "Enter Number : ";
    cin >> n;
    int cnt = 0;
    while(n>0){
      //  int lastDigit = n%10;
        cnt = cnt +1;
        n=n/10;
    }
    // log method
    //int cnt = (int)(log10(n)+1);
    // return cnt;
    cout << cnt ;
    return 0;
}