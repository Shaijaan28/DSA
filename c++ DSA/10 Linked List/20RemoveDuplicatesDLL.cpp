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
Node* removeDuplicates(Node *head){
    Node* temp = head;
    while(temp!=NULL && temp->next != NULL){
        Node* nextNode = temp->next;
        while(nextNode!=NULL && nextNode->data == temp->data){
            Node* duplicate = temp->next;
            while(nextNode!=NULL && nextNode->data ==temp->data){
               Node* duplicate = nextNode;
                nextNode = nextNode->next;
                delete duplicate; 
            }
            temp->next = nextNode;
            if(nextNode!=NULL) nextNode->prev = temp;
            temp = temp->next;
        }
        return head;
    }
}
int main (){

}