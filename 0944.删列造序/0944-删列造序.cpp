class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int Asize=A.size();
        int strsize=A[0].size();
        string temp="";
        int count=0;
        for(int i=0;i<strsize;i++)
            temp+="a";
        for(int i=0;i<Asize;i++)
            for(int j=0;j<strsize;j++)
            {
                if(A[i][j]>=temp[j])
                    temp[j]=A[i][j];
                else
                    temp[j]='z'+1;
                    
            }
        for(int i=0;i<strsize;i++)
        {
            if(temp[i]=='z'+1)
                count++;
        }
        return count;
    }
};