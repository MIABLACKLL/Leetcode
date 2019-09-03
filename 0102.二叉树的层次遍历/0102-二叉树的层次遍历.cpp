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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>   BFSVal;
        if(root==NULL)
            return BFSVal;
        queue<TreeNode*> eachlevel;
        eachlevel.push(root);
         vector<int> eachlevelVal;
        while(!eachlevel.empty())
        {
            int queuesize=eachlevel.size();
            eachlevelVal.clear();
            while(queuesize>0)
            {
                TreeNode* BFSnode=eachlevel.front();
                if(BFSnode->left!=NULL)
                    eachlevel.push(BFSnode->left);
                if(BFSnode->right!=NULL)
                    eachlevel.push(BFSnode->right);
                eachlevelVal.push_back(BFSnode->val);
                eachlevel.pop();
                queuesize--;
            }
            BFSVal.push_back(eachlevelVal);
        }
        return BFSVal;
    }
};