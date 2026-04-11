#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int > m;
    m["tv"] = 5000;
    m["mobile"] = 10000;
    m["laptop"] = 50000;

    m.insert({"camera", 25000});

    m.erase("tv");

    m.find("tv");
    

    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }

    cout<<"count = " << m["laptop"] << endl;
    return 0;
}