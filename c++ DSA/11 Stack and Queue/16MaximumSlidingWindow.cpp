#include<bits/stdc++.h>
using namespace std;
vector<int> maximumSlidingWindow(vector<int> nums, int k){
    vector<int> ans;
    int n = nums.size();
    int cnt =0;
    int maxx = INT_MIN;
    for(int i=0;i<n;i++){
        maxx = max(maxx,nums[i]);
        cnt ++;
        if(cnt == k){
            cnt=0;
            ans.push_back(maxx);
            maxx = INT_MIN;
        }
    }
    return ans;

}
int main (){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n ;i++){
        cin >> arr[i];
    }
    return 0;
}