class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int numsize=nums.size();
        int fix=0,left=1,right=numsize-1,diffvalue=INT_MAX-1;
        while(fix<numsize-2)
        {
            left=fix+1;
            right=numsize-1;
            while(left<right)
            {
                int thisdiff=nums[fix]+nums[left]+nums[right]-target;
                if(!thisdiff)
                    return target;
                else if(abs(thisdiff)<abs(diffvalue))
                    diffvalue=thisdiff;
                if(thisdiff<0)
                    left++;
                else
                    right--;
            }
            fix++;
        }
        return target+diffvalue;
    }
};