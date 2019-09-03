class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> countBits;
        countBits.push_back(0);
        int counteachBits=0;
        for(int i=1;i<=num;i++)
        {           
			int counteachBits = countBits[i >> 1] + (i & 1);
			countBits.push_back(counteachBits);         
        }
        return countBits;
    }
};