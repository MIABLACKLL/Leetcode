class Solution {
public:
    void DFScombination(string &sen,vector<string> &rs,const string digits,const int digsize,int k)
    {
        if(sen.size()==digsize)
            rs.push_back(sen);
        else
        {
            for(int i=0;(i<4&&(digits[k]=='9'||digits[k]=='7'))||i<3;i++)
            {
                if(digits[k]<='7')
                    sen+=char(47+'2'+(digits[k]-'2')*3+i);
                else
                    sen+=char(47+'2'+(digits[k]-'2')*3+i+1);
                DFScombination(sen,rs,digits,digsize,k+1);
                sen.pop_back();
            }
        }
    }
        
    vector<string> letterCombinations(string digits) { 
        vector<string> rs;
        if(digits=="")
            return rs;
        string sen="";
        DFScombination(sen,rs,digits,digits.size(),0);
        return rs;
    }
};