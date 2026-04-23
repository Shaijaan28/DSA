#include<bits/stdc++.h> //union 2 array
using namespace std;
vector<int> unionArray(vector<int> a,  vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i =0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: st){
        temp.push_back(it);        
    }
    return temp;
}
// vector<int> sortedArray(vector<int> a, vector<int> b){
//  int n1= a.size();
//  int n2 =b.size();
//  int i=0;
//  int j=0;
//  vector<int> unionArr;
//  while(i<n1 && j<n2){
//     if(a[i] <= b[j]){
//         if(unionArr.size()==0 || unionArr.back()!= a[i]){
//             unionArr.push_back(a[i]);
//         }
//         i++;
//     }
//     else{
//         if(unionArr.size()==0 || unionArr.back() != b[j]){
//             unionArr.push_back(b[j]);
//         }
//         j++;
//     }
//  }
// left some part............
// }
int main (){
    int n1; 
    cin >> n1;

    vector<int> arr1(n1);
    for(int i =0;i<n1;i++){
        cin >> arr1[i];
    }

    int n2; 
    cin >> n2;
    vector<int> arr2(n2);
    for(int i =0;i<n2;i++){
        cin >> arr2[i];
    }
    vector <int> result =unionArray(arr1,arr2);
    for(int i=0 ;i<result.size(); i++){
        cout << result[i] << " ";
    }

    
    return 0;
}