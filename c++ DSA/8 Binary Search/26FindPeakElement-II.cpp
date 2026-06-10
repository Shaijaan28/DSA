#include<bits/stdc++.h>
using namespace std;
int FindMaxValue(vector<vector<int>> &mat, int n , int m, int col){
    int maxValue =-1;
    int index=-1;
    for(int i=0;i<n;i++){
        if(mat[i][col]>maxValue){
            maxValue = mat[i][col];
            index =i;
        }
    }
    return index;
}
vector<int> findPeakGrid(vector<vector<int>> &mat){
    int  n = mat.size();
    int m = mat[0].size();
    int low =0,high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int maxRowIndex = FindMaxValue(mat,n,m,mid);
       // more ...........unable to understand
    }
}
int main (){
     
    return 0;
}