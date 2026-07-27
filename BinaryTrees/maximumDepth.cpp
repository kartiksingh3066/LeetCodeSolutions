#include<bits/stdc++.h>
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

    int maxDepth(Node*root){
        if(root==NULL) return 0;

        int l=maxDepth(root->left);
        int r=maxDepth(root->right);

        return max(l,r)+1;
    }
};

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    Solution sol;
    cout<<sol.maxDepth(root);
}