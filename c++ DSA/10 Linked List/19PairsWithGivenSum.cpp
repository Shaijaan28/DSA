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
Node* findTail(Node* head){
    Node* tail = head;
    while(tail->next!=NULL) tail = tail->next;
    return tail;
}
vector<pair<int, int>> findPairs(Node* head, int k){
    vector<pair<int,int>> ans;
    if(head==NULL) return ans;
    Node* left = head;
    Node* right = findTail(head);
    while(left->data < right->data){
        if(left->data + right->data == k){
            ans.push_back({left->data,right->data});
            left = left->next;
            right = right->prev;
        }
        else if(left->data + right->data < k){
            left = left->next;
        }
        else right = right ->prev;
    }
    return ans;
}