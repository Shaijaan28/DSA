#include<bits/stdc++.h>
using namespace std;
int findAllSubarraySumk(vector<int>&arr,int k , int n){
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int preSum =0,cnt =0;
    for(int i=0;i<n;i++){
        preSum += arr[i];
        int remove = preSum -k;
        cnt += mpp[remove];
        mpp[preSum] +=1;
    }
return cnt;
}
int main (){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << findAllSubarraySumk(arr,k,n);
    return 0;
} // check i chatgpt