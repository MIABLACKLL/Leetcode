#include<cstring>


class Solution {
public:
    int numJewelsInStones(string J, string S) {
    const char *Jarray=J.c_str();
    const char *Sarray=S.c_str();
    int numofj=0;
    for(int i=0;i<strlen(Jarray);i++)
        for(int j=0;j<strlen(Sarray);j++)
        {
            if(Jarray[i]==Sarray[j])
                numofj++;
        }
    return numofj;
    }
};