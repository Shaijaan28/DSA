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
Node* sortList(Node *head){
    if(!head || !head->next) return head;

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node *zero = zeroHead;
    Node *one = oneHead;
    Node *two = twoHead;
    Node *temp = head;

    while(temp){
        if(temp->data==0){
            zero->next = temp;
            zero = zero->next;
        } else if(temp->data ==1){
            one->next = temp;
            one = one -> next;
        } else {
            two ->next = temp;
            two = two ->next;
        }
        temp = temp ->next;
    }
    zero->next = (oneHead->next) ? (oneHead->next):(twoHead->next);
    one->next = twoHead->next;
    two->next = NULL;
    Node* newHead = zeroHead ->next;

    delete zeroHead;
    delete oneHead;
    return newHead;
}
int main (){

}