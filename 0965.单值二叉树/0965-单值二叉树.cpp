/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root,int sameval) {
        if(!root)
            return true;
        if(sameval!=root->val)
            return false;
        return isUnivalTree(root->left,sameval)&&isUnivalTree(root->right,sameval);
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root)
            return true;
        return isUnivalTree(root,root->val);
    }
};