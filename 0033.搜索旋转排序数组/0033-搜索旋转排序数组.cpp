class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1;
        int rotatedIndex=INT_MAX;
        int numsize=nums.size()-1,searchIndex=numsize/2;
        if(numsize==0||numsize==1)
        {
            if(target==nums[numsize])
                return numsize;
            else if(target==nums[0])
                return 0;
            else
                return -1;
        }
        int leftIndex=0,rightIndex=numsize;
        if(nums[0]<nums[numsize]);
        else if(nums[0]<nums[numsize-1]&&nums[0]>nums[numsize])
        {
            rotatedIndex=numsize;
            if(target==nums[numsize])
                return numsize;
            else
                leftIndex=0,rightIndex=numsize-1;
        }
        else
        {   
            while(rotatedIndex==INT_MAX)
            {
                if(nums[searchIndex-1]>=nums[0]&&nums[searchIndex]<=nums[numsize])
                    rotatedIndex=searchIndex;
                else if(nums[leftIndex]>nums[searchIndex])
                    rightIndex=searchIndex;
                else if(nums[searchIndex]>nums[rightIndex])
                    leftIndex=searchIndex;
                searchIndex=(leftIndex+rightIndex)/2;
                //cout<<searchIndex<<" "<<leftIndex<<" "<<rightIndex<<endl;
            }
            //cout<<rotatedIndex;
            if(target<=nums[numsize])
                leftIndex=rotatedIndex,rightIndex=numsize;
            else
                leftIndex=0,rightIndex=rotatedIndex-1;
        }
        int targetIndex=(leftIndex+rightIndex)/2;
        //cout<<leftIndex<<" "<<rightIndex<<" "<<targetIndex;
        while(leftIndex<=rightIndex)
        {
            if(target>nums[targetIndex])
                leftIndex=targetIndex+1;
            else if(target<nums[targetIndex])
                rightIndex=targetIndex-1;
            else
                return targetIndex;
            targetIndex=(leftIndex+rightIndex)/2;
        }
        return -1;   
    }       
};