#include<bits/stdc++.h>
using namespace std;
string read(int n, vector<int> arr, int target){
//     map<int ,int> mpp;
//     for(int i=0;i<n;i++){
//         int a = arr[i];
//         int more = target - a;
//         if(mpp.find(more)!= mpp.end()){
//             return "YES";
//         }
//         mpp[a]= i;
//     }
//     return "NO";
// }

//whithout using map
int left =0, right = n-1;
sort(arr.begin(), arr.end());
while(left<right){
    int sum = arr[left] + arr[right];
    if(sum == target){
        return "YES";
    }
    else if(sum < target) left++;
    else right--;
}
return "N0";
}

int main (){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target ;
    cout <<"Enter target : ";
    cin >> target;

    return 0;
}