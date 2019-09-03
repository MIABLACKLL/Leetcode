class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int rightIndex=nums.size()-1,leftIndex=0,midIndex=(rightIndex+leftIndex)/2;
        int numsize=nums.size();
        if(numsize==0||target<nums[0])
            return 0;
        else if(target>nums[numsize-1])
            return numsize;
        while(leftIndex<=rightIndex)
        {
            if(nums[midIndex]==target)
                return midIndex;
            else if(nums[midIndex]>target)
                rightIndex=midIndex-1;
            else
                leftIndex=midIndex+1;
            midIndex=(rightIndex+leftIndex)/2;
        }
        for(int insertIndex=1;insertIndex<numsize;insertIndex++)
        {
            if(nums[insertIndex-1]<target&&nums[insertIndex]>target)
               return insertIndex;
        }
        return -1;
    }
};