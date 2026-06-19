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
Node* removeNthNode(Node* head, int n){
    Node* fast = head;
    Node* slow  = head;
    for(int i=0;i<n;i++) fast = fast->next;
    if(fast == NULL) return head->next;
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
    return head;
}
int main (){
    return 0;
}