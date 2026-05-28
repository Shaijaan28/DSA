#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n){
    int i =0;
    for(int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
vector<int> duplicateElement(vector<int> arr, int n){
    unordered_map<int,int> freq;
    vector<int> ans;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto it : freq){
    if(it.second>1){
        ans.push_back(it.first);
    }
}
return ans;
}
int main (){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i =0 ; i<n; i++){
        cin >> arr[i];
    }
    cout << removeDuplicates(arr, n);
    return 0;
}