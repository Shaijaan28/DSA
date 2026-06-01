#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr){
    int low =0, high = arr.size()-1;
    int ans = INT_MAX;
    while(low<=high){
       int mid = (low+high)/2;
       //search space in already sorted
       if(arr[low]<=arr[high]){
        ans = min(ans, arr[low]);
        break;
       }
       if(arr[low]<=arr[mid]){
        ans= min(ans,arr[low]);
        low = mid +1;
       }
       else{
        high = mid -1;
        ans = min(ans,arr[mid]);
       }
    }
    return ans;
}
int main (){
    int n ;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    return 0;
}