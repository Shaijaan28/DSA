#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n , int num, vector<int> &arr){
    for(int i=0;i<n;i++){
        if(arr[i]==num) return i;
    }
    return -1;
}
int main (){
    int n ;
    cout <<"Size of array : ";
    cin >>n;
    

    vector<int>  arr(n);
    cout << "Enter array : ";
     for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int num;
    cout <<"Enter Num : ";
    cin >> num;
   
    int result = linearSearch(n,num,arr);
    cout << result;
    
    return 0;
}