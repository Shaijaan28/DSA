#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
     list<int> l ={1,2,3,4,5};  
    // In the C++ Standard Template Library (STL), 
    // std::list is a sequence container that implements a doubly-linked list.
    //  Unlike vectors, which use contiguous memory, lists store elements in 
    //  non-contiguous locations, with each element (node) containing pointers
    //   to both its predecessor and successor. 
   list<int> l;
   l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}