class Solution {
public:
    void sortColors(vector<int>& nums) {
     if(nums.empty())
         return;
     int zero_p=0,two_p=nums.size()-1,curr_p=0; 
     while(curr_p<=two_p)
     {
        if(nums[curr_p]==0)
            swap(nums[curr_p++],nums[zero_p++]);
        else if(nums[curr_p]==2)
            swap(nums[curr_p],nums[two_p--]);
        else
            curr_p++;
     }
    }
};