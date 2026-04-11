#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> vec(5,0);
    cout << "size = "<< vec.size()<< endl;
    for(int  i: vec){
        cout<< i << endl;
    }
    return 0;
}