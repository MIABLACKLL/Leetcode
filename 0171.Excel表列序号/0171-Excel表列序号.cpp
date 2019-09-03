class Solution {
public:
    int titleToNumber(string s) {
        long long int answer=0;
        int strsize=s.size();
        for(int i=0;i<strsize;i++)
            answer+=int(s[i]-'A'+1)*pow(26,strsize-1-i);
        return answer;
    }
};