//Find out how many times array has been rotated
#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr){
    int low =0, high = arr.size()-1;
    int ans = INT_MAX;
    int index =-1;
    while(low<=high){
       int mid = (low+high)/2;
       //search space in already sorted
       if(arr[low]<=arr[high]){
         if(arr[low]<ans){
            index=low;
            ans = arr[low];
         }
        break;
       }
       if(arr[low]<=arr[mid]){
        if(arr[low]<ans){
            index=low;
            ans = arr[low];
         }
         low = mid +1;
       }
       else{
        high = mid -1;
      if(arr[low]<ans){
            index=low;
            ans = arr[low];
         }
       }
    }
    return index;
}
int main (){
    return 0;
}