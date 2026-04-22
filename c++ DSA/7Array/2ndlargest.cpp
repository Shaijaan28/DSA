#include<bits/stdc++.h>//find 2nd largest and smallest no
#include<vector>
using namespace std;
int secondlargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = -1;
    for(int i =1; i<n; i++){
        if(a[i] > largest){
            slargest = largest ;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest){
        slargest = a[i];
        }

        
    }

    
    return slargest;
}
int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i =0 ;i<n ;i++){
        if(a[i] < smallest){
        ssmallest = smallest ;
        smallest = a[i];
    }
    else if(a[i] != smallest && a[i] < ssmallest){
        ssmallest = a[i];
    }
}
return ssmallest;
}

int main (){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i =0 ;i <n ;i++){
        cin >> arr[i];
    }
    cout <<"2nd largest element : " << secondlargest(arr,n) << endl;
    cout <<"2nd samllest element : " << secondSmallest(arr,n);
    return 0;
}