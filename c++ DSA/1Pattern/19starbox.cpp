#include<iostream>
using namespace std;
void print19(int n){
    for(int i=1;i<=n ;i++){
        // start
        for(int j =1;j<=n-i+1;j++){
            cout << "*" << " ";
        }

        //space
        for(int j=0;j<2*(i-1);j++){
            cout << "  ";
        }
        //start
        for(int j = 1; j<=n-i+1;j++){
            cout <<"*" <<" "; 
        }
        
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        //start
        for(int j=1; j<=i;j++){
            cout <<"*"<<" ";
        }
        //sopace
        for(int j=1; j<=2*n-2*i;j++){
            cout <<"  ";
        }
        //star
        for(int j=1; j<=i;j++){
            cout <<"*"<<" ";
        }
        cout << endl;
    }
}
int main (){
    int n;
    cin >> n;
    print19(n);
    return 0;
}