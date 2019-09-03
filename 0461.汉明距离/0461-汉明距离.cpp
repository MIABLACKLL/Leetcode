class Solution {
public:
    int hammingDistance(int x, int y) {
        int counthamming=0;
        int set=(x|y)-(x&y);
        while(set!=0)
        {
            set=(set&(set-1));
            counthamming++;
        }
        return counthamming;
    }
};