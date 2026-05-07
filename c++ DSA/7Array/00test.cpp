#include<bits/stdc++.h>
using namespace std;
int appearsTwice(vector<int> &arr, int n){
   unordered_set<int> st;
   for(int i=0;i<n;i++){
    st.insert(arr[i]);
   }
   for(int i=0;i<n;i++){
    if(st.count(i)==2)
    return i;
   }
   return -1;
}
int main (){
    int n ;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << appearsTwice(arr,n);
    return 0;
}