#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void push(int x) {
        if (size == total_size) {
            cout << "Heap Overflow\n";
            return;
        }

        arr[size] = x;
        int index = size;
        size++;

        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }

        cout << x << " is inserted\n";
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;

        if(left<size && arr[left]>arr[largest]) largest=left;
        if(right<size && arr[right]>arr[largest]) largest=right;

        if(largest!=index){
            swap(arr[index],arr[largest]);
            heapify(largest);
        }
    }
    void deletion(){
        if(size==0){
            cout<<"Heap underflow\n";
            return;
        }
        arr[0]=arr[size-1];
        size--;
        if(size==0) return;
        heapify(0);
    }
};

int main() {
    MaxHeap H1(6);

    H1.push(4);
    H1.push(14);
    H1.push(11);
    H1.deletion();
    H1.print();
    H1.push(114);
    H1.push(20);
    H1.push(80);
    H1.print();

    return 0;
}