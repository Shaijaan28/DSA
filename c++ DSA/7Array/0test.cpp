#include<bits/stdc++.h>
using namespace std;
vector<int> arrangElementBySign(vector<int> arr, int n){
 vector<int> ans (n,0);
 int posIndex =0, negIndex =1;
 for(int i=0;i<n;i++){
    if(arr[i]<0){
        ans[negIndex] = arr[i];
        negIndex+=2;
    }
    else ans[posIndex]=arr[i];
    posIndex+=2;
 }
 return ans;
}


 
int main (){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
   
    return 0;
}

// for(auto : it){
//         if(it.second > (arr.size()/2)){
//         return it.first;
