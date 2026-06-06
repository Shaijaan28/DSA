#include<bits/stdc++.h>
using namespace std;
int missingK(vector<int> nums, int n , int k){
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = nums[mid]- (mid+1);
        if(missing<k){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return k + high + 1;
}

int main (){
    return 0;
}