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
    bool recusion(TreeNode* root)
    {
        if(root==NULL)
            return false;    
        bool leftempty=recusion(root->left);
        bool rightempty=recusion(root->right);              
        if(!rightempty)
            root->right=NULL;
        if(!leftempty)
            root->left=NULL; 
        if(root->val==1||rightempty||leftempty)
            return true;
        else
            return false;
    }    
    TreeNode* pruneTree(TreeNode* root) {
        recusion(root);
        return root;
    }
};