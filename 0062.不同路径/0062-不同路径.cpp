class Solution {
public:
    int uniquePaths(int m, int n) {
        long step = m+n-2;
        long result=1;
        int min = m>n?n:m;
        for(int i=1;i<min;i++)
            result=(result*step--)/i;
        return result;
    }
};