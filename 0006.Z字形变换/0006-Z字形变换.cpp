class Solution {
public:
    string convert(string s, int numRows) {
        string conversion="";
        int zlen=2*numRows-2;
        int s_size=s.size();
        if(s_size<1||numRows<=1)
            return s;
        int sets=s_size/zlen;
        for(int i=0;i<numRows;i++)
            for(int j=0;j<sets+1;j++)
            {        
                if(i+zlen*j<s_size)
                {
                    if((i==0||i==numRows-1))           
                        conversion+=s[i+zlen*j];
                    else
                    {
                        conversion+=s[i+zlen*j];
                        if(zlen-i+zlen*j<s_size)
                            conversion+=s[zlen-i+zlen*j];
                    }
                }
            }
        return conversion;
        }
        
    
};