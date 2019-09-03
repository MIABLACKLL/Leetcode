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
    void recusion(TreeNode* root)
    {
        if(root==NULL)
            return;
        TreeNode* changeright=root->right;
        root->right=root->left;
        root->left=changeright;       
        invertTree(root->left);
        invertTree(root->right); 
    }  
    TreeNode* invertTree(TreeNode* root) {
        recusion(root);
        return root;              
    }
};