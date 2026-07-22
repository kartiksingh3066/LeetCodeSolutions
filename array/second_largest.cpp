#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondlargest(vector<int>& arr, int n) {
    int max = arr[0];

    // First pass: find largest
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int sec_large = INT_MIN;

    // Second pass: find largest element smaller than max
    for(int i = 0; i < n; i++) {
        if(arr[i] < max && arr[i] > sec_large) {
            sec_large = arr[i];
        }
    }

    return sec_large;
}

int main() {
    vector<int> arr = {2, 8, 9, 7, 6};
    int n = arr.size();

    cout << secondlargest(arr, n);
    return 0;
}
