class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(!nums.size())
            return 0;
        int indexlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
                nums[indexlen++]=nums[i];
        }
        return indexlen;        
    }
};