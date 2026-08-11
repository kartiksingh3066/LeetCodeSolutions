#include<iostream>
#include<list>
using namespace std;

void explainList() {
    list<int> ls;

    // 1. Adding elements
    ls.push_back(10); // {10}
    ls.push_back(20); // {10, 20}
    ls.push_front(5); // {5, 10, 20} -> distinct advantage over vector!

    // 2. Iterating (Must use iterators!)
    cout << "List: ";
    for(auto it : ls) {
        cout << it << " ";
    }
    cout << endl;

    // 3. Removing specific values
    ls.remove(10); // Removes all '10's from the list. {5, 20}

    // 4. Sorting and Reversing
    ls.push_back(15); // {5, 20, 15}
    ls.sort();        // {5, 15, 20}
    ls.reverse();     // {20, 15, 5}

    // 5. Inserting in the middle
    // We want to insert 100 before the 2nd element (15)
    auto it = ls.begin(); // points to 20
    advance(it, 1);       // points to 15 (advance moves iterator by n steps)
    
    ls.insert(it, 100);   // {20, 100, 15, 5}
    
    cout << "Final List: ";
    for(auto x : ls) cout << x << " ";
    cout << endl;
}

int main() {
    explainList();
    return 0;
}