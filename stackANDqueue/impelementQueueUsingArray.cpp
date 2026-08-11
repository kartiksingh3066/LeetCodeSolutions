#include <bits/stdc++.h>
using namespace std;

class Queue{
private:
    static const int size = 100;
    int q[size];
    int currsize;
    int start;
    int end;

public:
    Queue(){
        currsize = 0;
        start = -1;
        end = -1;
    }

    void push(int x){
        if(currsize == size){
            cout << "Queue Overflow\n";
            return;
        }

        if(currsize == 0){
            start = end = 0;
        }else{
            end = (end + 1) % size;
        }

        q[end] = x;
        currsize++;
    }

    void pop(){
        if(currsize == 0){
            cout << "Queue Underflow\n";
            return;
        }

        if(currsize == 1){
            start = end = -1;
        }else{
            start = (start + 1) % size;
        }

        currsize--;
    }

    int peek(){
        if(currsize == 0){
            cout << "Queue Underflow\n";
            return -1;
        }
        return q[start];
    }

    bool empty(){
        return currsize == 0;
    }

    int Size(){
        return currsize;
    }
};

 