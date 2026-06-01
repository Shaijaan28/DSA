#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x){
    int low = 0, high = n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

}
int upperBound(vector<int> arr, int n, int x){
    int low = 0, high = n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
pair<int,int> firstAndLastPosition(vector<int> &arr, int n, int k){
    int lb = lowerBound(arr,n,k);
    if(lb==n||arr[lb]!=k) return {-1,-1};
    return {lb,upperBound(arr,n,k)-1};
  
}

// Without using lb and ub
int firstOcurrence(vector<int> &arr, int n, int k){
    int low =0,high = n-1;
    int first =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            first =  mid;
            high = mid -1;
        }
        else if (arr[mid]<k)low = mid+1;
        else high = mid -1;
    }
    return first;
}
int lastOccurrence(vector<int>&arr, int n, int k){
    int low =0, high =n-1;
    int last =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            last = mid;
            low = mid +1;
        }
        else if(arr[mid]<k) low = mid +1;
        else high = mid -1;
    }
    return last;
}
pair<int,int> firstAndLastPosition(vector<int> &arr, int n , int k){
    int first = firstOcurrence(arr,n,k);
    if(first==-1)return {-1,-1};
    int last = lastOccurrence(arr,n,k);
    return {first,last};
}
int main (){
    return 0;
}