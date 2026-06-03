#include<bits/stdc++.h>
using namespace std;
vector<int> duplicateElement(vector<int> arr, int n){
    unordered_map<int, int> freq;
    vector<int> ans;
    for(int i=0;i<n;i++) freq[arr[i]]++;


    for(auto it : freq){
        if(it.second==1) {
            ans.push_back(it.first);
        }
    }
    return ans;
   

} 
int main (){
    int n ;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    return 0;
}


