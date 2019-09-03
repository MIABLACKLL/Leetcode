class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> euqalzeroSet;
        vector<int> eachsumzero;
        if(nums.size()<3)
            return euqalzeroSet;
        int fix=0;
        while(nums[fix]<=0)
        {
            int target=0-nums[fix];
            int left=fix+1,right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==target)
                {
                    eachsumzero.push_back(nums[fix]);
                    eachsumzero.push_back(nums[left]);
                    eachsumzero.push_back(nums[right]);
                    euqalzeroSet.push_back(eachsumzero);
                    eachsumzero.clear();
                    right--;
                    left++;
                    while(nums[right]==nums[right+1])
                        right--;
                    while(nums[left]==nums[left-1])
                        left++;
                }
                else if(nums[left]+nums[right]<target)
                    left++;
                else
                    right--;
            }
            fix++;
            while(nums[fix]==nums[fix-1])
                fix++;
            
        }
        return euqalzeroSet;
    }
};