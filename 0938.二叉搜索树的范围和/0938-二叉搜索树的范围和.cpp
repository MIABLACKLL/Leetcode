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
    int total=0;
    int flag=0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL)
            return 0;
        rangeSumBST(root->left,L,R);
        if(root->val==L)
            flag=1;
        if(flag==1)
            total+=root->val;
        if(root->val==R)
            flag=0;       
        rangeSumBST(root->right,L,R);
        
        return total;
    }
};