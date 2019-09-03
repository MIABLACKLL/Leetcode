class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> rangeIndex(2,-1);
        int rightIndex=nums.size()-1,leftIndex=0,midIndex=(rightIndex+leftIndex)/2;
        int numsize=nums.size();
        if(numsize==0||target<nums[0]||target>nums[rightIndex])
            return rangeIndex;
        while(leftIndex<=rightIndex)
        {
            if(nums[midIndex]==target)
            {
                leftIndex=midIndex,rightIndex=midIndex;
                while(leftIndex>0&&nums[leftIndex-1]==target)leftIndex--;
                while(rightIndex<numsize-1&&nums[rightIndex+1]==target)rightIndex++;
                rangeIndex[0]=leftIndex;
                rangeIndex[1]=rightIndex;
                return rangeIndex;
            }
            else if(nums[midIndex]>target)
                rightIndex=midIndex-1;
            else
                leftIndex=midIndex+1;
            midIndex=(rightIndex+leftIndex)/2;
        }
        return rangeIndex;
    }
};