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
        TreeNode* buildMaxtree(vector<int> nums)
    {
        if(nums.size()==0)
            return NULL;
        auto maxelement=max_element(nums.begin(),nums.end());
        TreeNode *root=new TreeNode(*maxelement);    
        vector<int> leftnums;
        leftnums.assign(nums.begin(),maxelement);
        vector<int> rightnums;
        rightnums.assign(maxelement+1,nums.end());
        root->left=buildMaxtree(leftnums);
        root->right=buildMaxtree(rightnums);      
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {     
        TreeNode* root=buildMaxtree(nums);
        return root;
    } 
};