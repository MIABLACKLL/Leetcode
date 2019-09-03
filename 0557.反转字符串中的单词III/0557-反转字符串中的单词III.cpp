class Solution {
public:
    string reverseWords(string s) {
        auto begin=s.begin();
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(*it==' ')
            {
                reverse(begin,it);
                begin=it+1;
            }                  
        }
        reverse(begin,s.end());
        return s;
    }
};