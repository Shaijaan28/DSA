#include<bits/stdc++.h>
using namespace std;
// brute
vector<vector<int>> mergeOverLappingIntervals(vector<vector<int>> arr, int n){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty()&& end<= ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<= end){
                end = max(end,arr[j][i]);
            }
            else{
                break;
            }

        }
        ans.push_back({start,end});
    }
    return ans;
}
// optimal
vector<vector<int>> mergeOverlapping(vector<vector<int>> &arr,int n){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(ans.empty()|| arr[i][0]> ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]= max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}
int main (){

    return 0;
} 