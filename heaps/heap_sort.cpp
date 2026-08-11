#include <iostream>
#include <vector>
using namespace std;

// Kisi bhi subtree ko Max-Heap banane ke liye heapify function
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child = 2*i + 1
    int right = 2 * i + 2; // right child = 2*i + 2

    // Agar left child root se bada hai
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Agar right child ab tak ke largest se bada hai
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Agar largest root nahi hai, toh swap karein aur recursive call karein
    if (largest != i) {
        swap(arr[i], arr[largest]);
        
        // Root badalne ke baad affected sub-tree ko wapas heapify karein
        heapify(arr, n, largest);
    }
}

// Main Heap Sort function
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Build Max-Heap (Rearrange array)
    // n/2 - 1 se start karte hain kyunki baki leaf nodes hote hain
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Ek-ek karke elements extract karein
    for (int i = n - 1; i > 0; i--) {
        // Current root (sabse bada) ko end par bhejien
        swap(arr[0], arr[i]);

        // Bache huye reduced heap par heapify call karein
        heapify(arr, i, 0);
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    heapSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}