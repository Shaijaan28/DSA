#include<iostream>
using namespace std;
int factN(int n){
    int facto =1;
    for(int i=1;i<=n;i++){
       facto*=i; 
    }
    return facto;

}


int main (){
    cout<< factN(5) << endl;

    return 0;
}