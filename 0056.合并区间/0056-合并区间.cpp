class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        if(intervals.empty())
            return result;
        result.push_back(intervals[0]);
        auto result_back = result.rbegin();
        for(auto interval : intervals)
        {
            if((*result_back)[1]>=interval[1])
                continue;
            else if((*result_back)[1]>=interval[0])
                (*result_back)[1] = interval[1];
            else
            {
                result.push_back(interval);
                result_back = result.rbegin();
            }
        }
        return result;
    }
};