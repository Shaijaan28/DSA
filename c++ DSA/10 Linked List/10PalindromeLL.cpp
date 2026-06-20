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
Node* reverseLinkedList(Node *head){ //using rec
    if(head == NULL || head->next == NULL) return head;
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}
bool isPalindrome(Node *head){
    if(head == NULL || head->next == NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseLinkedList(slow->next);
    Node* first = head;
    Node* second = newHead;
    while(second!=NULL){
        if(first->data != second->data){
            reverseLinkedList(newHead);
            return false;
        }
        first = first ->next;
        second = second ->next;
    }
    reverseLinkedList(newHead);
    return true;
}
int main (){

}