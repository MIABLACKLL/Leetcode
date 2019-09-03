class Solution {
public:
    void combinationDFS(vector<vector<int>> &combinationNum,vector<int> &eachcombination,const int k,const int n,int depth,int sum)
    {
        if(eachcombination.size()==k)
        {
            if(sum==n)
                combinationNum.push_back(eachcombination);
            else
                return;
        }
        else
        {       
            for(int i=depth;i<10;i++)
            {                
                int eachloopsum=sum+i;
                if(eachloopsum>n)
                    return;
                eachcombination.push_back(i);
                combinationDFS(combinationNum,eachcombination,k,n,i+1,eachloopsum);
                eachcombination.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinationNum;
        vector<int> eachcombination;
        combinationDFS(combinationNum,eachcombination,k,n,1,0);
        return combinationNum;
    }
};