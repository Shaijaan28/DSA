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
Node* reverseDLL(Node* head){
  if(head==NULL || head->next == NULL){
    return head;
  }
  Node* prev = NULL;
  Node* current = head;
  while(current!=NULL){
    prev = current->next;

    current->prev = current->next;
    current->next= prev;

    current = current->prev;

  }  
  return prev->prev;
}
int main (){

    return 0;
}