#include<iostream>
using namespace std;
int main (){
    int n ;
    cout << "Enter Number : ";
    cin >> n;
    // if(n<=0) cout<<"Invalid input";
    // for (int i = 2; i <=n; i++)
    // {
    //     if(n%i==0) {
    //         cout<<"Non Prime Number" ;
    //     }
    //     //break;
    //     else{
    //         cout<<" prime Number";
    //     }
    //     break;
       
    // }

    int count =0;
    for (int i = 1; i<=n; i++)
    {
       if(n%i==0){
        count=count+1; 
       } 
    }
    if(count==2) {
        cout<<"Prime Number";
    }
    else cout<<"Non prime";
    
 
   
     
    return 0;
}