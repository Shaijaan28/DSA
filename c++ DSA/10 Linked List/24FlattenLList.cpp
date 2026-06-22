#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* child;

     public:
    Node(int data1, Node* next1 ){
        data = data1;
        next = next1;     
    }
      public:
    Node(int data1){
        data = data1;
        next = nullptr;     
    }
};
Node* merge(Node* list1, Node* list2){
    Node* dummyNode = new Node(-1);
    Node* res = dummyNode;
    while(list1!=NULL && list2!=NULL){
        if(list1->data < list2->data){
            res->child = list1;
            res = list1;
            list1 = list1->child;
        }
        else{
            res->child=list2;
            res = list2;
            list2 = list2->child;
        }
        res->next = nullptr;
    }
    if(list1) res->child= list1;
    else res->child = list2;
    if(dummyNode->child) dummyNode->child->child->next = nullptr;
    return dummyNode->child;
}
Node* flattenLinkedList(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* mergeHead = flattenLinkedList(head->next);
    head=merge(head,mergeHead);
    return head;
}
int main (){    
}