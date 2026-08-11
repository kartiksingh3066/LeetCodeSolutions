#include<iostream>
#include<stack>
using namespace std;

void explainStack() {
    stack<int> s;

    // 1. Pushing elements (Building the stack)
    s.push(1); // Stack: {1}
    s.push(2); // Stack: {2, 1}  <- 2 is at the top
    s.push(3); // Stack: {3, 2, 1}
    s.push(4); // Stack: {4, 3, 2, 1}
    s.push(5); // Stack: {5, 4, 3, 2, 1} <- 5 is at the top

    // 2. Accessing the top
    cout << "Top element: " << s.top() << endl; // Prints 5

    // 3. Removing elements
    s.pop(); // Removes 5. Top is now 4.
    cout << "New Top element: " << s.top() << endl; // Prints 4

    // 4. Printing a stack
    // Since we can't iterate, we have to pop everything to see it!
    cout << "Stack elements: ";
    while(!s.empty()) {
        cout << s.top() << " "; // Print top
        s.pop();                // Remove top
    }
    cout << endl;
    // Note: The stack 's' is now empty!
}

int main() {
    explainStack();
    return 0;
}