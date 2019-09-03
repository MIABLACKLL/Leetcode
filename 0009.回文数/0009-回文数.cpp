class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0))
            return false;
        int reversalhalf=0;
        while(x>reversalhalf)
        {
            reversalhalf=reversalhalf*10+x%10;
            x/=10;
        }
        return x==reversalhalf||x==reversalhalf/10;
    }
};