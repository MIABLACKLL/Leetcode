class Solution {
public:
    void combineDFS(int level,vector<int> &visited,vector<vector<int>> &combination,int looptime, vector<int> &eachcomb,int size)
    {
        if(eachcomb.size()==size)
            combination.push_back(eachcomb);
        else
        {
            for(int i=level;i<looptime;i++)
            {
            eachcomb.push_back(i+1);
            combineDFS(i+1,visited,combination,looptime,eachcomb,size);
            eachcomb.pop_back();               
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> numsets;
        vector<int> visited(n);
        vector<int> eachcomb;
        vector<vector<int>> combination;
        combineDFS(0,visited,combination,n,eachcomb,k);
        return combination;
    }
};