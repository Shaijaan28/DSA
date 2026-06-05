#include<bits/stdc++.h>
using namespace std;
int FirstMissingPositive(vector<int> nums){
    int n = nums.size();
    map<int,int>mpp;
    for(int x : nums){
        if(x>=1 && x <= n){
            mpp[x]++;
        }
    }
    for(int i=0;i<n;i++){
        if(mpp.find(i)==mpp.end()){
            return i;
        }
    }
    return n+1;
}
int main (){
    int n ;
    cin >> n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
   
   
    return 0;
}


