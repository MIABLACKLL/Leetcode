class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfdividingnum;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            int dividing=10;
            bool iszero=true;
            while(temp>0)
            {
                int eachbit=temp%dividing;
                if(eachbit==0||i%eachbit!=0)
                {
                    
                    iszero=false;
                    break;
                }
                temp=temp/dividing;
            }
            if(iszero)
                selfdividingnum.push_back(i);
        }
        return selfdividingnum;
    }
};