#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {

        // Left side numbers (1 to i)
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // Spaces in the middle
        for(int s = 1; s <= 2*(n - i); s++) {
            cout << " ";
        }

        // Right side numbers (i to 1)
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
