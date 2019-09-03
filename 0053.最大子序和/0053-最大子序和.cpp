class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int result=nums[0],sum=0;
        for(int i:nums)
        {
            if(sum>0)
                sum+=i;
            else
                sum=i;
            result=max(sum,result);
        }
        return result;
    }
};