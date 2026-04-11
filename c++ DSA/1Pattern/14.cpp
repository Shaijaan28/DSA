#include<iostream>
using namespace std;
void print14(int n){
  
    for(int i=1;i<=n;i++){
        for(char ch = 'A'; ch<='A' +i; ch++){
            cout<<  ch <<" ";
            
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cout<<" Enter number of line : ";
    cin >>n;
    print14(n);
    return 0;
}