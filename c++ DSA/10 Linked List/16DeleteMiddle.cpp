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
Node* deleteMiddle(Node *head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    fast = head->next->next;
    while( fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;
    return head;
}

int main (){

}