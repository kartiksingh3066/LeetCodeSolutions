#include <iostream>
#include <algorithm>
using namespace std;

void swapping(int a[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(a[l], a[r]);
    swapping(a, l + 1, r - 1);
}

int main() {
    int a[5] = {1, 3, 2, 7, 5};
    int l = 0;
    int r = 4;

    swapping(a, l, r);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
