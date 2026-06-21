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
Node* findIntersection(Node *firstHead, Node *secondHead){
    if(firstHead == NULL || secondHead == NULL) return NULL;
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;
    while(temp1!= temp2){
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;

        if(temp1==temp2) return temp1;

        if(temp1 == NULL) temp1 = secondHead;
        if(temp2 == NULL) temp2 = firstHead;
    }
    return temp1;
}
int main (){

}