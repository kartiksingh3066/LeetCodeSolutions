#include<bits/stdc++.h>

using namespace std;

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
bool isSameTree(TreeNode* p, TreeNode* q) {
    
    if (p == NULL && q == NULL) return true;
    
    
    if (p == NULL || q == NULL) return false;
    
    
    if (p->val != q->val) return false;
    
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
};

int main(){
    TreeNode* p1 = new TreeNode(1);
    p1->left = new TreeNode(2);
    p1->right = new TreeNode(3);

    TreeNode* q1 = new TreeNode(1);
    q1->left = new TreeNode(2);
    q1->right = new TreeNode(3);

    Solution sol;
    cout<<sol.isSameTree(p1,q1);

}