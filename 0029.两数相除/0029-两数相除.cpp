class Solution {
public:
    int divide(int dividend, int divisor) {
        int quotient=0;
        bool isNeg=(dividend^divisor)>>31==-1;
        //cout<<isNeg;
        if(dividend==INT_MIN)
        {
            quotient++;
            if(divisor==-1)
                return INT_MAX;
            else if(divisor==1)
                return INT_MIN;
            else if(divisor==INT_MIN)
                return quotient;
            dividend+=abs(divisor);
        }
        if(divisor==INT_MIN)
            return quotient;
        int absDividend=abs(dividend),absDivsor=abs(divisor);
        int digit=0;
        while(absDivsor<=(absDividend>>1))
        {
            absDivsor<<=1;
            digit++;
        }
        while(digit>=0)
        {
            if(absDivsor<=absDividend)
            {
                quotient+=1<<digit;
                absDividend-=absDivsor;
            }
            absDivsor>>=1;
            digit--;
        }
        return isNeg?-quotient:quotient;
        
    }
};