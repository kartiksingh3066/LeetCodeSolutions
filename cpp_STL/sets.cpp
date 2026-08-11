#include<iostream>
#include<set>
using namespace std;

void explainSet() {
    set<int> st;

    // 1. Insertion (Automatic Sorting)
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4} <- Automatically inserted in the middle!

    // 2. Uniqueness
    st.insert(2); // {1, 2, 3, 4} <- 2 is ignored because it already exists.

    // 3. Traversal
    cout << "Set elements: ";
    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;
    
    // 4. Searching
    // st.find(val) returns an iterator to the element.
    // If NOT found, it returns st.end()
    auto it = st.find(3); 
    if(it != st.end()) {
        cout << "Found 3!" << endl;
    } else {
        cout << "3 not found." << endl;
    }

    // 5. Erasing
    st.erase(4); // Removes 4. {1, 2, 3}
    
    // You can also erase by iterator (faster)
    auto it2 = st.find(1);
    st.erase(it2); // Removes 1. {2, 3}
}

int main() {
    explainSet();
    return 0;
}