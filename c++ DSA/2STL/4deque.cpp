#include<iostream>
#include<deque>
using namespace std;
//std::deque (Double-Ended Queue) is a sequence container that allows 
//fast insertion and deletion at both its beginning and its end.
int main (){
    deque<int> d={1,2,3,4,5};
     
    for(int val : d){
        cout << val << " ";
    }
    cout << endl;
    cout << d[2]<< endl;

    return 0;
}