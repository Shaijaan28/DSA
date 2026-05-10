#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int> &a,int n){
    if(n==0) return 0;
    int longest =1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        if(st.find(it-1)== st.end()){
            int cnt =1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt = cnt +1;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}
int main (){ 
    int  n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << longestSuccessiveElements(a,n);
    return 0;
}