#include<iostream>
#include<set>
// set is an associative container 
// that stores unique elements
//  in a sorted order
using namespace std;
int main (){
    set<int> s;

    s.insert(5);
    s.insert(9);
    s.insert(3);
    s.insert(15);

    s.insert(5);
    s.insert(9);
    s.insert(3);

    cout << s.size() << endl;
    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}