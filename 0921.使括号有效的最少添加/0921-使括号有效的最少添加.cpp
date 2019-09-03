class Solution {
public:
    int minAddToMakeValid(string S) {
        int countmix=0;
        stack<char> bracket;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='(')
                bracket.push(S[i]);
            else if(S[i]==')'&&!bracket.empty())
                bracket.pop();
            else
                countmix++;
        }
        countmix +=bracket.size();
        return countmix;
    }
};