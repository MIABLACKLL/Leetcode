class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int boardRow=9,boardColumn=9,subBoard=9;
        vector<set<char>> sudokuSub(subBoard),sudokuRow(boardRow),sudokuColumn(boardColumn);
        for(int k=0;k<subBoard;k++)
            for(int i=0;i<boardRow/3;i++)
                for(int j=0;j<boardColumn/3;j++)
                {
                    char grid=board[i+k/3*3][j+k%3*3];
                    if(grid!='.')
                    {
                        if(!sudokuSub[k].count(grid)&&!sudokuRow[i+k/3*3].count(grid)&&                                           !sudokuColumn[j+k%3*3].count(grid))
                        {
                            sudokuSub[k].insert(grid);
                            sudokuRow[i+k/3*3].insert(grid);
                            sudokuColumn[j+k%3*3].insert(grid);
                        }
                        else
                            return false;
                    }

                }
        return true;
        
    }
};