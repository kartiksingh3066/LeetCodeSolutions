#include<iostream>
#include<queue>
using namespace std;

void explainQueue() {
    queue<int> q;

    // 1. Pushing elements (Line forms)
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(4); // {1, 2, 4}  <- 1 is Front, 4 is Back

    // 2. Accessing elements
    cout << "Front element: " << q.front() << endl; // Prints 1
    cout << "Back element: " << q.back() << endl;   // Prints 4

    // 3. Changing the element at the back
    q.back() += 5; 
    cout << "New Back element: " << q.back() << endl; // Prints 9 (4+5)

    // 4. Removing elements
    q.pop(); // Removes 1 (the guy at the front). Front is now 2.
    cout << "New Front element: " << q.front() << endl; // Prints 2

    // 5. Emptying the queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    // Output: 2 9
}

int main() {
    explainQueue();
    return 0;
}