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
Node* findNthNode(Node* temp, int k){
    int cnt =1;
    while(temp!= NULL){
        if(cnt == k) return temp;
        cnt ++;
        temp = temp->next;
    }
    return temp;
}
Node* rotate(Node *head, int k){
    if(head == NULL || k==0) return head;
    Node* tail = head;
    int len =1;
    while(tail->next!=NULL){
        tail = tail->next;
        len +=1;
    }
    if(k%len == 0) return head;

    k=k%len;

    tail->next = head;
    Node* newLastNode = findNthNode(head, len -k);
    head = newLastNode ->next;
    newLastNode->next=NULL;
    return head;

}

int main (){

}