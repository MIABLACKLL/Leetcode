class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int column_size=matrix[0].size(),row_size=matrix.size();
        bool zero_column=false,zero_row=false;
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<column_size;j++)
            {
                if(!matrix[i][j])
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    if(i==0)
                        zero_row=true;
                    if(j==0)
                        zero_column=true;
                }
                //cout<<matrix[i][j]<<" ";
            }
            //cout<<endl;
        }
        for(int i=1;i<row_size;i++)
        {
            if(matrix[i][0]==0)
                for(int j=0;j<column_size;j++)
                    matrix[i][j]=0;
        }
        for(int j=1;j<column_size;j++)
        {
            if(matrix[0][j]==0)
                for(int i=0;i<row_size;i++)
                    matrix[i][j]=0;
        }
        if(zero_column)
            for(int i=0;i<row_size;i++)
                matrix[i][0]=0;
        if(zero_row)
            for(int j=0;j<column_size;j++)
                matrix[0][j]=0;
            
   } 
};