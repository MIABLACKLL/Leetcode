class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> recordindex;
        int begin=0;
        int maxsize=0;
        for(int i=0;i<s.size();i++)
        {
            if(recordindex.find(s[i])==recordindex.end())
                recordindex[s[i]]=i;               
            else
            {      
                if(recordindex[s[i]]+1>begin)
                    begin=recordindex[s[i]]+1;
                recordindex[s[i]]=i;
            }   
             if(i-begin+1>maxsize)
                    maxsize=i-begin+1;
        }
        return maxsize;
    }
};