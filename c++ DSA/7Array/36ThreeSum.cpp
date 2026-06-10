#include<bits/stdc++.h>
using namespace std;
// Brute Force Solution
vector<vector<int>> triplet(int n, vector<int> &num){
 set<vector<int>> st; 
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k= j+1;j<n;k++){
            if(num[i]+num[j]+num[k]==0){
                vector<int> temp ={num[i],num[j],num[k]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            
           }
        }
    }
 }
 vector<vector<int>> ans(st.begin(), st.end());
 return ans;
}
// Better Solution
vector<vector<int>> triplet(int n,vector<int> &num){
 set<vector<int>> st;
 for(int i=0;i<n;i++){
    unordered_set<int> hashset;
    for(int j=i+1;j<n;j++){
        int third = -(num[i]+num[j]);
        if(hashset.find(third)!= hashset.end()){
            vector<int> temp = {num[i],num[j],third};
            sort(temp.begin(),temp.end());
            st. insert(temp);
        }
        hashset.insert(num[j]);
    }
 }
 vector<vector<int>> ans(st.begin(), st.end());
 return ans;
}
// optimal   22:00/38:24
int main (){
    int n;
    cin >> n;
    vector<int> (num);
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    triplet(n,num);
    return 0;
}