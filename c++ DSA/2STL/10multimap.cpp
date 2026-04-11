#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){ //multimap
    // multimap<string, int> m;
   
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);

      unordered_map<string, int> m;
   
    m.emplace("phone", 100);
    m.emplace("tv", 100);
    m.emplace("voltas", 100);
    m.emplace("tab", 100);

    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }

    
    return 0;
}