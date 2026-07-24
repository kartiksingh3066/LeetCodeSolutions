#include <iostream>
#include <vector>
using namespace std;

// ind = hum abhi kaunse index par hain
// ds  = humara Bag (jisme hum values store kar rahe hain)
// arr = shelf jahan items rakhe hain
// n   = total items kitne hain

void printSubsequences(int ind, vector<int> &ds, int arr[], int n) {
    
    // === BASE CASE: Kahan rukna hai ===
    // Agar hum array ke end ke paar chale gaye (items khatam)
    if (ind == n) {
        // Bag mein jo bhi hai, print kar do
        if (ds.size() == 0) cout << "{}"; // Agar bag khali hai
        else {
            for (auto it : ds) cout << it << " ";
        }
        cout << endl;
        return;
    }

    // === OPTION 1: PICK (Isse utha lete hain) ===
    ds.push_back(arr[ind]); // Bag mein daal diya
    printSubsequences(ind + 1, ds, arr, n); // Aage badh gaye
    
    // === BACKTRACKING (Wapas aake safai karna) ===
    // Ab hum wapas aa gaye hain. Humein "Not Pick" try karna hai.
    // Lekin bag mein toh abhi bhi wo element pada hai jo upar add kiya tha.
    // Usse nikaalna padega (Undo karna padega).
    ds.pop_back(); 

    // === OPTION 2: NOT PICK (Isse chhod dete hain) ===
    // Ab bag mein wo element nahi hai (kyunki pop kar diya).
    // Ab bina liye aage badhte hain.
    printSubsequences(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubsequences(0, ds, arr, n);
    return 0;
}