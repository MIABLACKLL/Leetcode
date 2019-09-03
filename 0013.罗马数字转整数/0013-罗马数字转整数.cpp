class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int> romannum{{"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000},
                                           {"IV",4},{"IX",9},{"XL",40},{"XC",90},{"CD",400},{"CM",900}};
        int integer=0;
        string substr="";
        for(int i=0;i<s.size();)
        {
            substr.clear();
            substr=s.substr(i,2);
            auto matchingstr=romannum.find(substr);
            if(matchingstr!=romannum.end())
            {
                integer+=romannum[substr];
                i+=2;
            }
            else
            {
                substr=s[i];
                integer+=romannum[substr];
                i++;
            }
        }
        return integer;
    }
};