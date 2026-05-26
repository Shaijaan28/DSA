#include<bits/stdc++.h>
using namespace std;
vector<int> MissingAndRepeting(vector<int> arr, int n){
   int hash[n-1]={0};
   for(int i=0;i<n;i++){
    hash[arr[i]]++;
   }
   int repeating =-1; int missing =-1;
   for(int i=0;i<n;i++){
    if(hash[i]==2) repeating=i;
    else if(hash[i]==0) missing =1;
    if(repeating!=-1 && missing !=-1) {
        break;
    }
   }
   return{repeating,missing};

} 
int main (){
    int n ;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    return 0;
}


