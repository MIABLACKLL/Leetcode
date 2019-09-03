class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int numsize=nums.size();
        if(numsize<2)
            return;
        int rightMaxIndex=numsize-1,leftMinIndex=-1;
        for(int tempRightMaxIndex=rightMaxIndex;tempRightMaxIndex>leftMinIndex;tempRightMaxIndex--)
        {
            int tempLeftMinIndex=tempRightMaxIndex-1;
            while(tempLeftMinIndex>=0&&nums[tempRightMaxIndex]<=nums[tempLeftMinIndex])
                tempLeftMinIndex--;
            if(tempLeftMinIndex>leftMinIndex&&nums[tempRightMaxIndex]>nums[tempLeftMinIndex])
            {
                leftMinIndex=tempLeftMinIndex;
                rightMaxIndex=tempRightMaxIndex;
            }
            //cout<<leftMinIndex<<rightMaxIndex<<" "<<tempLeftMinIndex<<tempRightMaxIndex<<endl;
        }
        //cout<<leftMinIndex<<rightMaxIndex;
        if(leftMinIndex!=-1)
            swap(nums[rightMaxIndex],nums[leftMinIndex]);
        auto it=nums.begin()+leftMinIndex+1;
        reverse(it,nums.end());
        return;
    }
};