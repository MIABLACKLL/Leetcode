class Solution {
public:
    int reverse(int x) {
        if(!x)
            return x;
        long reversenum=0;
        int deci_bits=log10(abs(x));
        int sign=x/abs(x);
        x=x*sign;
        while(x>0)
        {
            reversenum+=x%10*pow(10,deci_bits);
            deci_bits--;
            x/=10;
        }
        if(reversenum<-1*pow(2,31)||reversenum>pow(2,31)-1)
            return 0;
        return reversenum*sign;
        
    }
};