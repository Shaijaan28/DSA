#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter number : ";
    cin>>n;
//method 1
    // for (int i = 1; i <= n; i++)
    // {
    //    if(n%i==0) cout << i << endl;
    // }
    
//method2
    vector<int> ls;
   for(int i=1; i<=sqrt(n); i++){
    if(n%i==0){
        ls.push_back(i);
        if((n/i)!=i){
            ls.push_back(n/i);
        }
    }

   }
   sort(ls.begin(), ls.end());
   for(auto it : ls) cout << it <<" ";


    return 0;
}
