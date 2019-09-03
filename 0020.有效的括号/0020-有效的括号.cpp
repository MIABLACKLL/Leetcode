class Solution {
public:
    bool isValid(string s) {
        stack<char> pare;
        bool rightposition=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                pare.push(s[i]);
            else if(s[i]==')')
                if(!pare.empty()&&pare.top()=='(')
                    pare.pop();
                else
                {
                    rightposition=false;
                    break;
                }
            else if(s[i]=='}')
                if(!pare.empty()&&pare.top()=='{')
                    pare.pop();
                else
                {
                    rightposition=false;
                    break;
                }  
            else if(s[i]==']')
                if(!pare.empty()&&pare.top()=='[')
                    pare.pop();
                else
                {
                    rightposition=false;
                    break;
                }
        }
        return pare.empty()&&rightposition;
    }
};