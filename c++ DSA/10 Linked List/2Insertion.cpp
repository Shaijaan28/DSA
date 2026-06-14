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
//Insert on head
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

//Insert on tail
Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

//Insert On Kth position
Node* insertposition(Node* head, int el, int k){
    if(head == NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(el, head);
    }
    int cnt =0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

//Insert ele before the value
Node* insertBeforeValue(Node* head, int el, int val){
    if(head == NULL){
       return NULL;
    }
    if(head->data==val){
        return new Node(el, head);
    }
   
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data == val){
            Node* x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main (){
    vector<int> arr ={2,3,4,5};
    Node* head = convertArr2LL(arr);
    head = insertHead(head,100);
    head = insertTail(head,20);
    head = insertposition(head,100,1);
    head = insertBeforeValue(head,100,4);
    print(head);
}