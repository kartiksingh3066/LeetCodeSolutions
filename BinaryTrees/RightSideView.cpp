#include <iostream>
#include <queue>
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

class Solution{
    public:
    void preorder(Node*root,int level,vector<int>&ans){
        if(root==NULL) return;
        if(level==ans.size()) ans.push_back(Node->data);
        preorder(root->right,level+1,ans);
        preorder(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        preorder(root,0,ans);
        return ans;
    }
}