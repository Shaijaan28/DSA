#include<bits/stdc++.h>
using namespace std;
int main (){

    //creation
    //unordered_map<string,int> m;
    
    map<string,int> m;

    //insertion 1
    pair<string,int> p = make_pair("rauf",3);
    m.insert(p);
    //2
    pair<string,int> pair2("love" , 2);
    m.insert(pair2);
    //3
    m["mera"] =1;

    //search
    cout << m["mera"] << endl;
    cout << m.at("rauf")<< endl;

    //size
    cout << m.size() << endl;
   
    // to check presnece
    cout << m.count("bro") << endl;

    //erase
    m.erase("love");


    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    //iterator
    // unordered_map<string , int> :: iterator it = m.begin();

    // while(it != m.end()){
    //     cout << it->first << " " << it->second << endl;
    //     it++;
    // }
    map<string , int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }


    return 0;
}