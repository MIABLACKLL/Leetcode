class Solution {
public:
    vector<int> diStringMatch(string S) {
        int increase=0,down=S.size();
        vector<int> DImatch;
        for(char letter:S)
        {
            if(letter=='I')
                DImatch.push_back(increase++);
            else
                DImatch.push_back(down--);
        }
        if(S[S.size()-1]=='I')
             DImatch.push_back(increase++);
        else
             DImatch.push_back(down--);        
        return DImatch;
    }
};