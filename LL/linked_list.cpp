#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

    int data;
    Node* next;

    
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }

    
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node*convert2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthOfLinkedList(Node*head){
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int isPresent(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


Node*removeHead(Node*head){
    if(head==NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node*removeTail(Node*head){
    if(head->next==NULL || head==NULL) return NULL;

    Node*temp=head;
    while(head->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

Node*removeK(Node*head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node*removeEl(Node*head,int el){
    if(head==NULL) return head;
    if(head->data==el){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node*insertHead(Node*head,int val){
    Node*temp=new Node(val,head);
}

Node*insertAtTail(Node*head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node*newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node*insertPosition(Node*head,int k,int el){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }else{
            return head;
        }
    }
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==(k-1)){
            Node*x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node*insertBeforeValue(Node*head,int value,int el){
    if(head==NULL){
        return NULL;
    }
    if(head->data==value){
        return new Node(el,head);
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==value){
            Node*x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={12,5,8,7};
    Node*head=convert2LL(arr);
    // head=removeHead(head);
    // head=removeK(head,3);
    // cout<<isPresent(head,7);
    // print(head);

    cout<<lengthOfLinkedList(head);
    
}



