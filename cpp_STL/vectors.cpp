#include<iostream>
#include<vector>
using namespace std;

void insertionExamples() {
    vector<int> v = {10, 20, 30}; 
    // v is {10, 20, 30}

    v.insert(v.begin(), 5); 
    // Insert 5 at the beginning. 
    // v is now {5, 10, 20, 30}

    v.insert(v.begin() + 2, 2, 50); 
    // Go to index 2 (between 10 and 20), insert two 50s.
    // v is now {5, 10, 50, 50, 20, 30}

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
}

void deletionExamples() {
    vector<int> v = {10, 20, 30, 40, 50};

    v.pop_back(); 
    // v is {10, 20, 30, 40}

    // Delete the element at index 1 (value 20)
    v.erase(v.begin() + 1); 
    // v is {10, 30, 40}

    // Delete a range: from index 1 to 3 (exclusive of 3)
    // Means it deletes index 1 and 2.
    // Current v: {10, 30, 40} -> Deletes 30, 40
    v.erase(v.begin() + 1, v.begin() + 3); 
    // v is {10}

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
}

void accessExamples() {
    vector<int> v = {10, 20, 30};

    cout << v[0]<<" ";      // 10
    cout << v.back()<<" ";  // 30
    cout << v.front(); // 10
}

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Using scope resolution operator (::) for iterator type
    vector<int>::iterator it = v.begin();
    
    it++; // Move to next element
    cout << *(it) << endl; // Prints 20 (Dereferencing the iterator)

    it = it + 2; // Move 2 steps forward
    cout << *(it) << endl; // Prints 40

    // Printing using iterators
    cout << "Vector: ";
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    cout<<endl;
    insertionExamples();
    cout<<endl;

    deletionExamples();
    cout<<endl;

    accessExamples();

    return 0;
}

