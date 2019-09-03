class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int total=0;
        int clumnsize=A[0].size();
        int rowsize=A.size();
        vector<int> countone(clumnsize);
        for(auto itline=A.begin();itline!=A.end();itline++)
        {
                for (int i = clumnsize-1; i>=0; i--)
                {
                    if(!((*itline)[0]))
                        (*itline)[i]=!((*itline)[i]);
                    if((*itline)[i])
                        countone[i]++;
                }           
        }       
        for(auto itline=A.begin();itline!=A.end();itline++)
        {
            {
                int bits=itline->size()-1;
                int i=0;
                for(auto itelement=itline->begin();itelement!=itline->end();itelement++)
                {                    
                    if(countone[i]<rowsize/2.0)
                        *itelement=!(*itelement);
                    if(*itelement)
                        total+=pow(2,bits);
                    bits--;
                    i++;
                }
            }           
        }        
        return total;                  
    }
};