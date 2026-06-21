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
Node* startingPointCycle(Node* head){
    Node* slow = head ;
    Node* fast = head ;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            slow = head;
            while(slow!=fast){
            fast = fast ->next;
            slow = slow->next;
            }
            return slow;
        }

    }
}