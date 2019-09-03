class Solution {
public:   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sub;
        vector<int> temp;
        int n=nums.size();
        int subsize=0;
        for(int i=0;i<n;i++)
        {
           subsize=sub.size();
           for(int j=0;j<subsize;j++)
           {
               temp.assign(sub[j].begin(),sub[j].end());
               temp.push_back(nums[i]);
               sub.push_back(temp);
           }
            vector<int> eachelement;
            eachelement.push_back(nums[i]);
            sub.push_back(eachelement);         
        }   
        temp.clear();
        sub.push_back(temp);
        return sub;       
    }
};