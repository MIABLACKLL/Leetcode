class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> topmax(grid[0]);
        vector<int> rightmax;
        int maxadd=0;
        int linemax=0;
        int rowsize=grid.size();
        int columnsize=grid[0].size();
        for(vector<vector<int>>::iterator itline=grid.begin();itline!=grid.end();itline++)
        {
            rightmax.push_back(*max_element(itline->begin(),itline->end()));
            for(int i=0;i<columnsize;i++)
            {
                if(topmax[i]<(*itline)[i])            
                    topmax[i]=(*itline)[i];
            }
        }
          for(int i=0;i<rowsize;i++)
        {
            for(int j=0;j<columnsize;j++)
            {
                if(topmax[j]<rightmax[i])
                {
                    maxadd+=(topmax[j]-grid[i][j]);
                }
                else
                {
                    maxadd+=(rightmax[i]-grid[i][j]);
                }
            }                      
        }
        
        return maxadd;
        
    }
};