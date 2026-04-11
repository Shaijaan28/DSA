#include<iostream>
#include<vector>
using namespace std;
int main(){
   //pair<int, int> p= {1,5};
    pair<int, pair<char, int>> p ={1,{'a',3}};
    vector<pair<int , int>> vec = {{1,2}, {2,8}};

    cout << p.first << endl;
    cout << p.second.first << endl;


    return 0;
}