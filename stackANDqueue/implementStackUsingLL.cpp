#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* top = nullptr;
int size = 0;

void push(int x){
    Node* temp = new Node(x);
    temp->next = top;
    top = temp;
    size++;
}

void pop(){
    if(size == 0){
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    top = top->next;
    delete temp;
    size--;
}

int peek(){
    if(size == 0){
        cout << "Stack Underflow\n";
        return -1;
    }

    return top->data;
}

int main(){
    push(4);
    push(10);
    push(20);

    cout << peek() << endl;   // 20

    pop();

    cout << peek() << endl;   // 10

    return 0;
}