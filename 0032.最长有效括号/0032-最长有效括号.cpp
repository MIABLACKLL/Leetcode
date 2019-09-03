class Solution {
public:
    int longestValidParentheses(string s) {
        vector<pair<char,bool>> parentheses;
        int validParentheses=0,topposition=0;
        for(char parenthese:s)
        {
            parentheses.push_back(make_pair(parenthese,false));
            topposition=parentheses.size()-1;
            if(parenthese==')'&&topposition!=0)
            {
                int tempTopposition=topposition;
                topposition--;
                while(topposition>=0&&parentheses[topposition].second)
                    topposition--;
                if(topposition>=0&&parentheses[topposition].first=='(')
                {
                    parentheses[tempTopposition].second=true;
                    parentheses[topposition].second=true;
                }    
            }
            
        }
        int tempvalidParentheses=0;
        for(auto it=parentheses.begin();it!=parentheses.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
            if(it->second)
                tempvalidParentheses++;
            else          
                tempvalidParentheses=0;
            if(validParentheses<tempvalidParentheses)
                validParentheses=tempvalidParentheses;         
        }
        return validParentheses;
    }
};