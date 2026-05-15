#include<bits/stdc++.h>
using namespace std;
// Brute Force O(n^4)
vector<vector<int>> fourSum(vector<int>& num, int target, int n){
set<vector<int>> st;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            for(int l= k+1;k<n;k++){
                long long sum = num[i]+num[j];
                sum += num[k];
                sum += num[l];
                if(sum == target){
                    vector<int> temp = {num[i]+num[j]+num[k]+num[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }

            }
        }
    }
}
vector<vector<int>> ans(st.begin(),st.end());
return ans;
}

//Better Sol
vector<vector<int>> fourSum(vector<int>&nums, int target, int n){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long> hashset;
            for(int k = j+1;k<n;k++){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                long long fourth = target - (sum);
                if(hashset.find(fourth)!= hashset.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],target}; // target me notsure
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);

            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// optimal soln 18:00/28:46
int main (){
    int n;
    cin >>n;
    vector<int> (num);
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    int target;
    cin >> target;
    return 0;
}