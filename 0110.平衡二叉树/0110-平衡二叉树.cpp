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
private:
    bool isBalancedTree=true;
public:
    int countDepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int leftdepth=countDepth(root->left)+1;
        int rightdepth=countDepth(root->right)+1;
        if(abs(leftdepth-rightdepth)>1)
            isBalancedTree=false;
        return leftdepth>rightdepth?leftdepth:rightdepth;
    }
    bool isBalanced(TreeNode* root) {
        countDepth(root);
        return isBalancedTree;
    }
};