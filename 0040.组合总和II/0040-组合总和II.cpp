class Solution {
public:
    void dfs(const vector<int> &candidates,const int target,int resSum,vector<int>&res,vector<vector<int>> &resArray,const int size,int level)
    {
        if(resSum==target)
        {
            resArray.push_back(res);
            return;
        }
        else if(resSum>target)
            return;
        else
        {
            for(int i=level;i<size;i++)
            {
                if(i>0&&i>level&&candidates[i]==candidates[i-1])
                    continue;
                res.push_back(candidates[i]);
                dfs(candidates,target,resSum+candidates[i],res,resArray,size,i+1);
                res.pop_back();
            }
        }
            
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> res;
        vector<vector<int>> resArray;
        int resSum=0;
        dfs(candidates,target,resSum,res,resArray,candidates.size(),0);
        return resArray;
    }   
};