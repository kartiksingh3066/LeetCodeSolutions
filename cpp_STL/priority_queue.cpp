#include<iostream>
#include<queue>
using namespace std;

void explainMaxHeap() {
    priority_queue<int> pq;

    pq.push(5);  // {5}
    pq.push(2);  // {5, 2}
    pq.push(8);  // {8, 5, 2}  <- 8 bubbles to the top!
    pq.push(10); // {10, 8, 5, 2} <- 10 is now top

    cout << "Top element: " << pq.top() << endl; // Prints 10

    pq.pop(); // Removes 10. The next largest (8) moves to top.
    cout << "New Top: " << pq.top() << endl; // Prints 8
}

void explainMinHeap() {
    // Syntax for Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5); // {5}
    pq.push(2); // {2, 5}   <- 2 is smaller, so it goes to top
    pq.push(8); // {2, 5, 8}
    pq.push(1); // {1, 2, 5, 8} <- 1 becomes the new top

    cout << "Smallest element: " << pq.top() << endl; // Prints 1
}