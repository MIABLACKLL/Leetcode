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
    
     bool isValidBST(TreeNode* root) {            
        if(root==NULL)
            return true;
        if(root->left!=NULL)
        {
            if(root->val<=root->left->val)
                return false; 
            TreeNode* temp=root->left->right;
            while(temp!=NULL)
            {
                if(root->val<=temp->val)
                    return false;
                temp=temp->right;
            }                 
        }
        if(root->right!=NULL)
        {    
            if(root->val>=root->right->val)
                return false;
            TreeNode* temp=root->right->left;
            while(temp!=NULL)
            {
                if(root->val>=temp->val)
                    return false;
                temp=temp->left;
            }
        }
        bool isleftValid=isValidBST(root->left);
        bool isrightValid=isValidBST(root->right);
        if(!isleftValid||!isrightValid)
            return false;
        return true;
 }
};