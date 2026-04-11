#include<iostream>
using namespace std;
int main (){
int n ;
cout <<" Enter a number : ";
cin >> n;
//bool isPrime = true;

for(int i=2;i<=n-1 ; i++){
    if(n%i == 0){
         cout<< n <<" is a prime no\n" ;
        break;
    }
    else{
        cout << n << "  is a non prime no" ; 
        break;
    }
}
// if(isPrime == true){
//     cout<<"prime no\n";
// }else {
//     cout << " non prime no\n";
// }
    return 0;
}
