#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    int maximumPath(Node* root, int &maxi) {
        if (root == NULL) return 0;

        int left = max(0, maximumPath(root->left, maxi));
        int right = max(0, maximumPath(root->right, maxi));

        maxi = max(maxi, left + right + root->data);

        return root->data + max(left, right);
    }

    int maxPathSum(Node* root) {
        int maxi = INT_MIN;
        maximumPath(root, maxi);
        return maxi;
    }
};

int main() {
    Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    Solution sol;
    cout << sol.maxPathSum(root);

    return 0;
}