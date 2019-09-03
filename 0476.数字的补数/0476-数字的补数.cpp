class Solution {
public:
    int findComplement(int num) {
        int implementnum;
        int nextbits=0,lastbits=0;
        int finalnum=0;
        while(num>0){
            nextbits=0;
            int temp=num-(num&(num-1));
            while(temp!=0)
            {
                temp=temp>>1;
                nextbits++;
            }                        
            implementnum=((num-1)-(num&(num-1)))<<lastbits;                
            finalnum+=implementnum;
            num=num&(num-1);
            num=num>>nextbits;
            lastbits+=nextbits;
        }
        return finalnum;
    }
};