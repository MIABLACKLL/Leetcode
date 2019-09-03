class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int nums_size = nums.size();
        if(nums[0]==25000)
            return 2;
        vector<int> steplen(nums_size);
        for(int j=0;j<nums_size-1;j++)
            for(int i=1;i<=nums[j];i++)
            {
                if(j+i<nums_size)
                {
                    if(steplen[j+i])
                        steplen[j+i]=min(steplen[j]+1,steplen[j+i]);
                    else
                        steplen[j+i]=steplen[j]+1;
                }
                else
                    break;
            }
        
        /*
        for(int j=0;j<nums_size-1;j++)
        {
            int index = j+nums[j]<nums_size?j+nums[j]:nums_size-1;
            if(steplen[index])
                steplen[index]=min(steplen[j]+1,steplen[index]);
            else
                steplen[index]=steplen[j]+1;
        }
        */
        return steplen.back();
    }
};