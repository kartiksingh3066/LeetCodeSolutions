#include <iostream>
#include <vector>
using namespace std;


void printSubsequences(int ind, vector<int> &ds, int arr[], int n) {
    
    
    if (ind == n) {
        // Bag mein jo bhi hai, print kar do
        if (ds.size() == 0) cout << "{}"; // Agar bag khali hai
        else {
            for (auto it : ds) cout << it << " ";
        }
        cout << endl;
        return;
    }

    
    ds.push_back(arr[ind]); // Bag mein daal diya
    printSubsequences(ind + 1, ds, arr, n); // Aage badh gaye
    
    
    ds.pop_back(); 


    printSubsequences(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubsequences(0, ds, arr, n);
    return 0;
}