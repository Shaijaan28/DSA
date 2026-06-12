#include<bits/stdc++.h>
using namespace std;
struct Node {
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
//length of ll
int lengthOfLL(Node* head){
    int cnt =0;
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp-> next;
        cnt ++;
    }
    return cnt;
}
//search in ll
int checkPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp-> next;
    }
    return 0;
}
int main (){
    vector<int> arr ={2,3,4,5};
    Node* head = convertArr2LL(arr);
    //traversal
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp-> next;
    }
    cout << lengthOfLL(head);
    Node* y = new Node(arr[0], nullptr);
    cout << y-> data;
    //search in ll
    cout << checkPresent(head,5);
    
}