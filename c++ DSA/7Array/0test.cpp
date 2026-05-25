#include<bits/stdc++.h>
using namespace std;
int majorityElementnby3(vector<int> arr, int n){
  //  int n = arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if (it.second>n/3) return it.first;
    }
}
int main (){
    int n ;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 cout << majorityElementnby3(arr,n);
    return 0;
}


