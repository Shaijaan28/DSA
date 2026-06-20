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
//using rec
int addHelper(Node* temp){
    if(temp==NULL) return 1;
    int carry = addHelper(temp->next);
    temp->data+=carry;
    if(temp->data <10) return 0;
    temp->data =0;
    return 1;
}
Node *addOne(Node *head){
    int carry = addHelper(head);
    if(carry==1){
        Node* newNode = new Node(1);
        newNode->next = head;
        head = newNode;
    }
    return head;
}
int main (){
    return 0;
}