#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

     public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;     
    }
      public:
    Node(int data1){
        data = data1;
        next = nullptr;     
    }
};
Node* sortTwoLists(Node* list1, Node* list2){
    Node* t1 = list1;
    Node* t2 = list2;
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while(t1!=NULL && t2 != NULL){
        if(t1->data < t2->data){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{
            temp->next=t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1) temp->next =t1;
    else temp->next = t2;
    return dummyNode ->next;
}
int main (){

}