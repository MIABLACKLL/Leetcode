class Solution {
public:
    void permuteDFS(vector<vector<int>> &allsets,int index,vector<int> &eachset,vector<int> &origin,vector<int> &visited)
    {
        if(eachset.size()==origin.size())
            allsets.push_back(eachset);
        else
        {
            for(int i=0;i<origin.size();i++)
            {
                if(visited[i]==0)
                {
                    eachset.push_back(origin[i]);
                    visited[i]=1;
                    permuteDFS(allsets,index+1,eachset,origin,visited);
                    eachset.pop_back();
                    visited[i]=0;
                }
            }
        }      
    }    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allsets;
        vector<int> visited(nums.size(),0);
        vector<int> eachset;
        permuteDFS(allsets,0,eachset,nums,visited);
        return allsets;
    }
};