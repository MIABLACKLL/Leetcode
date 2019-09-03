class Solution {
public:
    string countAndSay(int n) {
        string sayRes="1";
        for(int i=1;i<n;i++)
        {
            string tempSayRes="";
            for(int j=0;j<sayRes.size();j++)
            {
                int sameLen=1;
                while(sayRes.size()>1&&sayRes[j+sameLen]==sayRes[j+sameLen-1])
                    sameLen++;
                tempSayRes+=char(sameLen+48);
                tempSayRes+=sayRes[j+sameLen-1];
                j+=sameLen-1;
            }
            //cout<<tempSayRes<<endl;
            sayRes=tempSayRes;
        }
        return sayRes;
    }
};