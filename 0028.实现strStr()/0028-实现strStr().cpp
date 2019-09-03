class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        int *preindex=new int[needle.size()];
        memset(preindex,0,sizeof(int)*needle.size());
        int j=0,i=1;
        for(int k=0;k<needle.size()-1;k++)
        {
            if(needle[i]==needle[j])
            {
                preindex[i++]=preindex[i-1]+1;
                j++;
            }
            else
            {
                while(needle[i]!=needle[j]&&j!=0)
                    j=preindex[j-1];
                if(needle[i]!=needle[j])
                    i++;
                else
                {
                    preindex[i++]=preindex[j++]+1;
                }
            }
        }    
        /*for(int k=0;k<needle.size();k++)
        {
            cout<<preindex[k];
        }
        cout<<endl;*/
        int subindex=0,strindex=0;
        while(strindex<haystack.size())
        {
            while(haystack[strindex]==needle[subindex]&&strindex<haystack.size())
            {
                strindex++;
                subindex++;
            }
            //cout<<strindex<<" "<<subindex<<endl;
            if(subindex==needle.size())
                return strindex-subindex;
            else if(subindex)
                subindex=preindex[subindex-1];
            else
                strindex++;
            
        }
        return -1;
                      
    }
};