class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int indexlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[indexlen])
            {
                nums[++indexlen]=nums[i];
            }
        }
        return indexlen+1;
    }
};