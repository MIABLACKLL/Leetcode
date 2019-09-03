class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0,index = s.size()-1;
        while(index&&s[index]==' ')
            index--;
        while(index>=0&&s[index]!=' ')
        {
            length++;
            index--;
        }
        return length;
    }
};