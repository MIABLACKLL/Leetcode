class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int rowsize=A.size();
        int columnsize=A[0].size();
        for(int i=0;i<rowsize;i++)
        {
            for(int j=0;j<columnsize;j++)
            {
                if(j<columnsize/2)
                swap(A[i][j],A[i][columnsize-j-1]);
                A[i][j]=!(A[i][j]);
            }
        }
        return A;
        
    }
};