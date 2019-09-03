class Solution {
public:
    int findpalindrome(string s,int left,int right,const int s_size)
    {
        while(left>=0&&right<s_size&&s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        int s_size=s.size();
        int left=0,maxlen=0;
        if(s_size<=1) return s;
        for(int i=0;i<s_size-1;i++)
        {
            int evenlen=findpalindrome(s,i,i+1,s_size);
            int oddlen=findpalindrome(s,i-1,i+1,s_size);
            int len=max(evenlen,oddlen);
            if(len>maxlen)
            { 
                maxlen=len;
                if(len&1)
                    left=i-len/2;
                else
                    left=i-len/2+1;
            }
        }
        string maxsubstr=s.substr(left,maxlen);
        return maxsubstr;
    }
};