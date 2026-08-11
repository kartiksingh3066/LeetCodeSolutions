#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int arr[100];
    int top;
public:
    Stack(){
        top=-1;
    }

    void push(int x){
        if(top==99){
            cout<<"Stack Overflow !";
            return;
        }
        top+=1;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
            return;
        }
        cout<<arr[top]<<"\n";
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack Underflow";
            return -1;
        }
        cout<<arr[top]<<"\n";
    }

    int size(){
        return top+1;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    //s.peek();
    s.size();
}