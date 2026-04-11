#include<bits/stdc++.h>
using namespace std;
//pairs
// void pairexplain(){
//     pair<int , int> p= {1,3};
//     cout << p.first << " "<< p.second;

//     pair<int , pair<int ,int>> p = {1,{3,4}};
//     cout << p.first << " "<< p.second.second <<" "<< p.second.first;
// } 

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

   // v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int > v(5);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) <<" ";

    it= it+2;
    cout << *(it) << " ";

    vector<int>:: iterator it = v.end();
   // vector<int>::iterator it = v.rend();
    //vector<int> :: iterator it= v.rbegin();

    cout <<v[0]<<" "<< v.at(0);
    cout << v.back() << " ";


}
void explainList(){
       list<int> ls; 

       ls.push_back(2);//{2}
       ls.emplace_back(4); //{2,4}
       ls.push_front(5); //{5,2,4};
       ls.emplace_front(); //{2,4};
    }


int main (){
    return 0;
}