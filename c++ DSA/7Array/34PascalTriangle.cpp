#include<bits/stdc++.h>
using namespace std;
// given R and c and find the element
int nCr(int n , int r){
    long long res =1;
    for(int i=0;i<r;i++){
        res  = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
//for nth row
vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col <row;col++){
        ans = ans*(row-col);
        ans = ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
} 
// for entire pascal triangle
vector<vector<int>> pascalTriangle(int N){
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++){
   //     ans.push_back(ansRow);
    }
    return ans;
}

int main (){
    int n,r;
    cin >> n, cin >>r;
    cout << nCr(n,r);
    return 0;
}