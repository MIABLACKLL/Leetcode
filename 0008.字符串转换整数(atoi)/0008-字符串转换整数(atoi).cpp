class Solution {
public:
    int myAtoi(string str) {
        int splitunnum=0;
        while(str[splitunnum]==' ')
            splitunnum++;
        int sign=1;
        if(str[splitunnum]=='-')
        {
            sign=-1;
            splitunnum++;
        }
        else if(str[splitunnum]=='+')
            splitunnum++;
        while(str[splitunnum]=='0')
            splitunnum++;
        int numlen=splitunnum;
        while(str[numlen]-'0'>-1&&str[numlen]-'0'<10)
            numlen++;
        numlen-=splitunnum;
        if(!numlen)
            return 0;
        else if(numlen>10)
        {
            if(sign==1)return INT_MAX;
            else return INT_MIN;
        }
        long int numresult=0;
        for(int i=0;i<numlen;i++)
            numresult+=(str[splitunnum+i]-'0')*pow(10,numlen-i-1);
        numresult*=sign;
        if(numresult>INT_MAX)
            return INT_MAX;
        else if(numresult<INT_MIN)
            return INT_MIN;
        else 
            return numresult;
        
        
    }
};