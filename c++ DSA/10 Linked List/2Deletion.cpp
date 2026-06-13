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
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head ;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
//Delete Head
Node* removesHead(Node* head){
    if(head==NULL)return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
//12:37--
int main (){
    vector<int> arr = {12,23,3,4};
    Node* head = convertArr2LL(arr);
    head = removesHead(head);
    print(head);
}