class Solution {
public:
    bool canJump(vector<int>& nums) {
        int nums_size = nums.size();
        if(nums_size==0||nums_size==1)
            return true;
        if(!nums[0]) return false;
        int max_step = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(max_step<i)
                return false;
            max_step = max(max_step,nums[i]+i);
            if(max_step>=nums_size-1)
                return true;
        }
        return false;
    }
};
