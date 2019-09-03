class Solution {
public:
    vector<string> legalparenthesis;
    void recusionParenthesis(int left,int right,string parenthesis)
    {
        if(right<left)
            return;
        if(right==0&&left==0)
                legalparenthesis.push_back(parenthesis);              
        else{
        if(left>0)
            recusionParenthesis(left-1,right,parenthesis+'(');
        if(right>0)
            recusionParenthesis(left,right-1,parenthesis+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        
        recusionParenthesis(n,n,"");
        
        return legalparenthesis;
    }
};