#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
int findLength(Node* slow, Node* fast){
    int cnt =1;
    fast = fast->next;
    while(slow!=fast){
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int lengthOfLoop(Node *head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return findLength(slow,fast);
        }

    }
    return 0;
}
int main (){
    
}