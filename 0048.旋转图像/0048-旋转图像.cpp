class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return;
        int size=matrix.size();
        int halfsize=size/2;
        for(int i=0;i<halfsize;i++)
        {
            int swapnum=size-2*i-1;
            for(int j=0;j<swapnum;j++)swap(matrix[i][i+j],matrix[i+j][size-1-i]);
            for(int j=0;j<swapnum;j++)swap(matrix[i][i+j],matrix[size-1-i][size-1-i-j]);
            for(int j=0;j<swapnum;j++)swap(matrix[i][i+j],matrix[size-1-i-j][i]);
        }
        return;
    }
};