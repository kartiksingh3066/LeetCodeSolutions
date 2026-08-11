#include<iostream>
#include<deque> // Include the library
using namespace std;

void explainDeque() {
    deque<int> dq;

    // 1. Insertion at both ends
    dq.push_back(10);  // {10}
    dq.push_front(20); // {20, 10}
    dq.push_back(30);  // {20, 10, 30}
    dq.push_front(40); // {40, 20, 10, 30}

    // 2. Random Access (Like a vector!)
    cout << "Element at index 2: " << dq[2] << endl; // Prints 10

    // 3. Deletion at both ends
    dq.pop_back();  // Removes 30. {40, 20, 10}
    dq.pop_front(); // Removes 40. {20, 10}

    // 4. Iteration
    cout << "Deque elements: ";
    for(auto it : dq) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    explainDeque();
    return 0;
}