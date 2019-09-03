class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty()||matrix[0].empty())
            return result;
        int i=0,j=0;
        int length = matrix[0].size(),width = matrix.size();
        int loop = (min(length,width)+3)/2-1;
        result.push_back(matrix[0][0]);
        matrix[0][0] = INT_MAX;
        for(int k=0;k<loop;k++)
        {
            while(true)
            {
                if(j<length-1&&matrix[i][j+1]!=INT_MAX)
                    j++;
                else
                    break;
                result.push_back(matrix[i][j]);
                matrix[i][j] = INT_MAX;
            }
            while(true)
            {
                if(i<width-1&&matrix[i+1][j]!=INT_MAX)
                    i++;
                else
                    break;
                result.push_back(matrix[i][j]);
                matrix[i][j] = INT_MAX;
            }
            while(true)
            {
                if(j>0&&matrix[i][j-1]!=INT_MAX)
                    j--;
                else
                    break;
                result.push_back(matrix[i][j]);
                matrix[i][j] = INT_MAX;
            }
            while(true)
            {
                if(i>0&&matrix[i-1][j]!=INT_MAX)
                   i--;
                else
                    break;  
                result.push_back(matrix[i][j]);
                matrix[i][j] = INT_MAX;
            }
        }
        return result;
    }
};