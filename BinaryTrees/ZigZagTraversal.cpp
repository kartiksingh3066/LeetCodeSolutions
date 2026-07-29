#include<bits/stdc++.h>
using namespace std;


//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight=true;
        while(!nodesQueue.empty()){
            int size=nodesQueue.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=nodesQueue.front();
                nodesQueue.pop();
                int index=(leftToRight) ? i : (size-i-1);

                row[index]=node->val;
                if(node->left){
                    nodesQueue.push(node->left);
                }
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            leftToRight=!leftToRight;
            result.push_back(row);
        }
        return result;
    }
};


int main() {
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    Solution sol;

    vector<vector<int>> ans = sol.zigzagLevelOrder(root);

    for (auto &level : ans) {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}