#include<bits/stdc++.h>
using namespace std;
vector <int> IntersectionArray(vector<int> &A, int n, vector<int> &B, int m){
    // vector<int> ans;
    // int vis[m] = {0};
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<m; j++){
    //         if(A[i]==B[j] && vis == 0){
    //             ans.push_back (A[i]);
    //             vis[j]=1;
    //             break;
    //         }
    //         if(B[j] > A[i]) break;
    //     }
    // }
    // return ans;

    //optimal solution
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(A[i] <B[j]){
            i++;
        }
        else if(B[j] < A[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
}
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
    vector <int> result =IntersectionArray(arr1,n1,arr2,n2);
    for(int i=0 ;i<result.size(); i++){
        cout << result[i] << " ";
    }

    
    return 0;
}