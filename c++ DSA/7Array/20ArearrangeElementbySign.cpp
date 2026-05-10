#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums,int n){
  //  int n = nums.size();
    vector<int> ans (n,0);
    int postIndex = 0, negIndex =1;
    for(int i=0;i<n;i++){
       if(nums[i]<0){
        ans[negIndex] = nums[i];
        negIndex += 2;
    }
    else {
        ans [postIndex] = nums[i];
        postIndex +=2;
    }
}
return ans;
}
int main (){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    vector<int> result = rearrangeArray(nums,n);
    for(int i=0;i<n;i++){
        cout << result[i]<<" ";
    }

    return 0;
}