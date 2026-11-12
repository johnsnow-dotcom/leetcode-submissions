/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    void sum(TreeNode*node){
        if(!node) return;
        if(node->left&&node->left->left==nullptr&&node->left->right==nullptr) ans+=node->left->val;
        sum(node->left); 
        sum(node->right);  
    }
    int sumOfLeftLeaves(TreeNode* root) {
    sum(root);
    return ans;    
    }
};