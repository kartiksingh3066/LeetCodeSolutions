#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() {
        val = 0;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x, TreeNode *left, TreeNode *right) {
        val = x;
        this->left = left;
        this->right = right;
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != nullptr && root->val != val) {
            root = (val < root->val) ? root->left : root->right;
        }
        return root;
    }
};

int main() {


    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;

    int target = 2;
    TreeNode* ans = sol.searchBST(root, target);

    if (ans != nullptr) {
        cout << "Node found: " << ans->val << endl;
    } else {
        cout << "Node not found" << endl;
    }

    return 0;
}
