class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> keyb={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string> samelinewords;
        map<char,int>  keybmap;
        for(int i=0;i<3;i++)
            for(char letter:keyb[i])
            {
                keybmap[letter]=i;
                keybmap[letter-32]=i;
            }
        for(int i=0;i<words.size();i++)
        {
            int record=keybmap[words[i][0]];
            for(char letter:words[i])
            {           
                if(record!=keybmap[letter])
                {
                    record=-1;
                    break;
                }
            }
            if(record!=-1)
                samelinewords.push_back(words[i]);
        
        }
        return samelinewords;
    }
};