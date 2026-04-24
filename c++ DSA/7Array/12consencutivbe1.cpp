#include<bits/stdc++.h>
using namespace std;
int consencutiveOnes(vector<int> &nums){
    int maxi =0;
    int cnt =0;
    for(int i=0;i<nums.size(); i++){
        if(nums[i] == 1){
            cnt ++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt =0;
        }
    }
    return maxi;
}
int main (){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i =0;i<n ;i++){
        cin >>arr[i];
    } 
    cout << consencutiveOnes(arr);
    return 0;
}