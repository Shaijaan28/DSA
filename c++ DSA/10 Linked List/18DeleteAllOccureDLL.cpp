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
Node* deleteAllOccurrences(Node* head, int k){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == k){
        //if this is the head of the LL
        // then post deletion the head will be update
        if(temp==head){
            head = temp->next;
        }
        Node* nextNode = temp->next;
        Node* prevNode = temp->prev;
        if(nextNode!=NULL) nextNode->prev = prevNode;
        if(prevNode!=NULL) prevNode->next = nextNode;

        delete temp;
        temp = nextNode;
    }
    else {
        temp = temp->next;
    }

    }
    return head;
}
int main (){

}