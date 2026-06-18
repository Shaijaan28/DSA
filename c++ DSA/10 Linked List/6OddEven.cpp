//LC 328
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
Node* oddEvenList(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;

    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd = odd -> next;
        even = even -> next->next;
    }
    odd->next = evenHead;
    return head;   
}
int main (){
    
}