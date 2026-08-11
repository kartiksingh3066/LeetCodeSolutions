#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    
    Node(int data1,Node*next1,Node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }

    
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node*convert2DLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node*removeHead(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*prev=head;
    head=head->next;
    delete prev;
    return head;
}

Node*removeTail(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*newTail=tail->prev;
    newTail->next=nullptr;
    tail->prev=nullptr;
    delete tail;
    return head;
}

Node*removeKthElement(Node*head,int k){
    if(head==NULL){
        return NULL;
    }
    Node*kNode=head;
    int cnt=0;
    while(kNode!=NULL){
        cnt++;
        if(cnt==k) break;
        kNode=kNode->next;
    }
    Node*back=kNode->prev;
    Node*front=kNode->next;
    if(back==NULL && front==NULL){
        return NULL;
    }else if(back==NULL){
        return removeHead(head);
    }else if(front==NULL){
        return removeTail(head);
    }
    front->prev=back;
    back->next=front;
    kNode->next=nullptr;
    kNode->prev=nullptr;
    delete kNode;
    return head;
}
void removeNode(Node*temp){
    Node*back=temp->prev;
    Node*front=temp->next;
    if(front==NULL){
        back->next=nullptr;
        temp->prev=nullptr;
        free(temp);
        return;
    }
    back->next=front;
    front->prev=back;

    temp->next=temp->prev=nullptr;
    free(temp);
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node*insertBeforeHead(Node*head,int val){
    Node*newNode=new Node(val,head,nullptr);
    head->prev=newNode;

    return newNode;
}

Node*insertBeforeTail(Node*head,int val){
    if(head->next==NULL){
        return insertBeforeHead(head,val);
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    Node*back=tail->prev;
    Node*newNode=new Node(val,tail,back);
    back->next=newNode;
    tail->prev=newNode;
    return head;
}

Node*insertBeforeKth(Node*head,int val,int k){
    if(k==1){
        return insertBeforeHead(head,val);
    }
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node*back=temp->prev;
    Node*newNode=new Node(val,temp,back);
    temp->prev=newNode;
    back->next=newNode;
    return head;
}

void insertBeforeNode(Node*node,int val){
    Node*back=node->prev;
    Node*newNode=new Node(val,node,back);
    back->next=newNode;
    node->prev=newNode;
}

int main(){
    vector<int> arr={12,5,8,7};
    Node*head=convert2DLL(arr);
    // removeNode(head->next);
    insertBeforeNode(head->next->next,9);
    print(head);
}