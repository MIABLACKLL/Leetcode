class Solution {
public:
    static bool keysort(const pair<int,int>&a,const pair<int,int>&b)
    {
            return a.second<b.second;
    }
    vector<int> twoSum(vector<int>& nums, int target) {       
        vector<int> twosum;
        int numsize=nums.size();
        vector<pair<int,int>> valindex;
        for(int i=0;i<numsize;i++)
            valindex.push_back(make_pair(i,nums[i]));
        sort(valindex.begin(),valindex.end(),keysort);
        auto left=valindex.begin();
        auto right=valindex.end();
        right--;
        /*for(auto it=valindex.begin();it!=valindex.end();it++)
            cout<<it->first<<" "<<it->second<<endl;*/
        while(true)
        {
            int sum=left->second+right->second;
            //cout<<sum<<" "<<left->second<<" "<<right->second<<endl;
            if(sum<target)
                left++;
            else if(sum>target)
                right--;
            else
            {
                twosum.push_back(left->first);
                twosum.push_back(right->first);
                break;
            }
        }
        return twosum;
    }
};