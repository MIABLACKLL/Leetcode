class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string logestmaching="";
        if(strs.empty())
            return logestmaching;
        else if(strs.size()==1)
            return strs[0];
        int mixlen=INT_MAX;
        bool iscontinue=true;
        for(int i=0;i<strs.size();i++)
            if(strs[i].size()<mixlen)
                mixlen=strs[i].size();
        for(int i=0;i<mixlen;i++)
        {
            char letter=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                //cout<<letter<<endl;
                if(letter!=strs[j][i])
                {
                    iscontinue=false;
                    break;            
                }
                else if(j==strs.size()-1)
                    logestmaching+=letter;
            }
            if(!iscontinue)
                break;
        }
        return logestmaching;
    }
};