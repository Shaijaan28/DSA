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
Node* reverseLinkedList(Node *head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
Node* getKthNode(Node* temp,int k){
    k-=1;
    while(temp!=NULL && k>0){
        k--;
        temp = temp ->next;
    }
    return temp;
}
Node* kReverse(Node* head, int k){
    Node* temp = head;
    Node* prevLast = NULL;
    while(temp!=NULL){
        Node* kThNode = getKthNode(temp,k);
        if(kThNode == NULL){
            if(prevLast) prevLast->next= temp;
            break;
        }
        Node* nextNode = kThNode->next;
        kThNode->next = NULL;
        reverseLinkedList(temp);
        if(temp==head){
            head = kThNode;
        } else{
            prevLast->next = kThNode;
        }
        prevLast = temp;
        temp = nextNode;
    }
    return head;
}
int main (){

}