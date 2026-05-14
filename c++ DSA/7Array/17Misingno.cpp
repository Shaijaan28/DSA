#include<bits/stdc++.h>
using namespace std;

// int missingNumber(vector<int> arr, int n){
//     unordered_set<int> st;   
//     // Step 1: Array ke sab elements set mein daalo
//     for(int i = 0; i < n-1; i++){
//         st.insert(arr[i]);
//     }   
//     // Step 2: 1 to N check karo
//     for(int i = 1; i <= n; i++){
//         if(st.count(i) == 0){
//             return i;  // jo nahi mila wo missing hai
//         }
//     }
//     return -1;
// }
int missingNumber(vector<int> arr,int n){
    int sum = n* (n+1)/2;
   int sum2 =0;
    for(int i=0; i<n-1; i++){
        sum2+= arr[i];
    }
    return (sum - sum2);
}
// int missingNumber(vector<int>&a, int N){
//     int xor1 = 0, xor2=0;
//     int n = N-1;
//     for(int i=0; i<n; i++){
//         xor2 = xor2 ^ a[i];
//         xor1 = xor1 ^ (i+1);
//     }
//     xor1 = xor1^ N;
//     return xor1 ^ xor2;
// }
int main(){
    int n;
    cout << "N enter karo : ";
    cin >> n;
    
    vector<int> arr(n-1);  // n-1 elements honge
    cout << "Array enter karo : ";
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    
    cout << "Missing number : " << missingNumber(arr, n);
    return 0;
}