#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1; // FIX 1: Right half starts at mid + 1

    // Merge the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // FIX 2: Copy temp back to original arr
    // temp is 0-indexed, but arr corresponds to range [low...high]
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void ms(vector<int> &arr, int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    ms(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    
    // FIX 3: Call mergeSort with correct arguments (only 2 args)
    mergeSort(arr, n); 

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    return 0;
}