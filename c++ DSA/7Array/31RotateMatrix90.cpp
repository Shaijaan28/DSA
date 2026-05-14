#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat,int n){
    //transpose
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    //reverse
    for(int i=0;i<n;i++){
        //row is mat[i]
        reverse(mat[i].begin(),mat[i].end());
    }
}


int main (){
    int n ;
    cin >>n;
   vector<vector<int>> mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
     rotateMatrix(mat,n);
    for(int i=0;i<n ;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} 