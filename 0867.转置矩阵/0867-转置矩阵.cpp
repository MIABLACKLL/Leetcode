class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int Asize=A.size();
        int columnsize=A[0].size();
        vector<vector<int>> transposematrix(columnsize);
        for(int i=0;i<columnsize;i++)
        {
            for(int j=0;j<Asize;j++)
                transposematrix[i].push_back(A[j][i]);
        }
        return transposematrix;
    }
};