#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int , vector<int>, greater<int>> q;
   //priority_queue<int> q;
  
    q.push(5);
    q.push(9);
    q.push(3);

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}