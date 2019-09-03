class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> patternwords;
        map<char,int> lettertable;
        for(int i=0;i<words.size()+1;i++)
        {
            int count=0;
            for(int i=0;i<26;i++)
                lettertable['a'+i]=0;
            if(i==0)
            {
                for(int j=0;j<pattern.size();j++)
                {
                    if(lettertable[pattern[j]]==0)
                    {
                        lettertable[pattern[j]]=(++count);                      
                    }
                    pattern[j]=('0'+lettertable[pattern[j]]);
                }
                
            }
            else
            {
                string mappingletter;
                for(int j=0;j<words[i-1].size();j++)
                {
                    if(lettertable[words[i-1][j]]==0)
                    {
                        lettertable[words[i-1][j]]=++count;
                    }
                    mappingletter+=('0'+lettertable[words[i-1][j]]);                    
                }
                if(mappingletter==pattern)
                    patternwords.push_back(words[i-1]);
            }
        }
        return patternwords;
    }
};